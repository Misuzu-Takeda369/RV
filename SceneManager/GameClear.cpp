#include <Novice.h>
#include "SceneManager/SceneManager.h"
#include "SceneManager/GameClear.h"

GameclearScene::GameclearScene(SceneChangeto* changer) : BaseScene(changer) {

}


GameclearScene::~GameclearScene() {

}

void GameclearScene::Initialize()
{
	//�^�C�g�����[�h
}

void GameclearScene::Finakize()
{

}

void GameclearScene::Update(char* keys, char* preKeys) {



	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		//�{�^���������玟�̃V�[����
		InfSchang_->ChangeScene(Title);
	}

}

void GameclearScene::Draw() {
	Novice::ScreenPrintf(10, 10, "GameClear");
}