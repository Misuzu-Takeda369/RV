#include <Novice.h>
#include "SceneManager/SceneManager.h"
#include "SceneManager/PlayMode.h"


PlayMode::PlayMode(SceneChangeto* changer) : BaseScene(changer) {

}


PlayMode::~PlayMode() {

}

void PlayMode::Initialize()
{
	//�Q�[����ʃ��[�h
}

void PlayMode::Finakize()
{

}

void PlayMode::Update(char* keys, char* preKeys) {

#pragma region �V�[����ς���
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		//�{�^���������玟�̃V�[����
		InfSchang_->ChangeScene(Gameover);
	}
	else if (preKeys[DIK_0] == 0 && keys[DIK_0] != 0) {
		//�{�^���������玟�̃V�[����
		InfSchang_->ChangeScene(Gameclear);
	}
#pragma endregion
}

void PlayMode::Draw() {
	Novice::ScreenPrintf(10, 10, "PlayMode");
}