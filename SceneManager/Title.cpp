#include <Novice.h>
#include "SceneManager/Title.h"

TitleScene::TitleScene(SceneChangeto* changer) : BaseScene(changer) {

}


TitleScene::~TitleScene() {

}

void TitleScene::Initialize()
{
	//�^�C�g�����[�h
}

void TitleScene::Finakize()
{

}

void TitleScene::Update(char* keys, char* preKeys) {

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		//�{�^���������玟�̃V�[����
		InfSchang_->ChangeScene(Game);
	}

}

void TitleScene::Draw() {
	Novice::ScreenPrintf(10,10,"Title");
}