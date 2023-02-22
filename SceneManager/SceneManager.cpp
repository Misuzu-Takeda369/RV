#include <Novice.h>
#include "SceneManager/SceneManager.h"
#include "SceneManager/Title.h"
#include "SceneManager/PlayMode.h"
#include "SceneManager/Gameover.h"
#include "SceneManager/Gameclear.h"

SceneManager::SceneManager() : nextScene_(None) {
	//���̃V�[���������Ă�������ۂ̎� �ŏ��̃V�[��������
	nowScene_ = (BaseScene*) new TitleScene(this);
}

SceneManager::~SceneManager() {

}

void SceneManager::Initialize() {
	nowScene_->Initialize();
}

void SceneManager::Finakize() {
	nowScene_->Finakize();
}

void SceneManager::Update(char*keys, char* preKeys) {
	if (nextScene_ != None) {
		//���̃V�[�����p�ӂ���Ă����猻�݂̃V�[���̏I������
		nowScene_->Finakize();
		delete nowScene_;

		//�V�[���ɂ���ĕς���
		switch (nextScene_)
		{
		case Title:
			nowScene_ = (BaseScene*) new TitleScene(this);

			break;
		case Game:
			nowScene_ = (BaseScene*) new PlayMode(this);

			break;

		case Gameclear:
			nowScene_ = (BaseScene*) new GameclearScene(this);
			break;

		case Gameover:
			nowScene_ = (BaseScene*) new GameoverScene(this);
			break;

		default:
			break;
		}

		//���̃V�[���̏������
		nextScene_ = None;
		//�V�[����������
		nowScene_->Initialize();
	}

	//���炩�̃V�[���������Ă�(���̃V�[������)


	nowScene_->Update(keys, preKeys);
}

void SceneManager::Draw() {
	nowScene_->Draw();
}

void SceneManager::ChangeScene(Scene nextScene) {
	nextScene_ = nextScene;
	//���̃V�[�����Z�b�g����
}