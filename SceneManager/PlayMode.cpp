#include <Novice.h>
#include "SceneManager/SceneManager.h"
#include "SceneManager/PlayMode.h"


PlayMode::PlayMode(SceneChangeto* changer) : BaseScene(changer) {

}


PlayMode::~PlayMode() {

}

void PlayMode::Initialize()
{
	//ゲーム画面ロード
}

void PlayMode::Finakize()
{

}

void PlayMode::Update(char* keys, char* preKeys) {

#pragma region シーンを変える
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		//ボタン押したら次のシーンへ
		InfSchang_->ChangeScene(Gameover);
	}
	else if (preKeys[DIK_0] == 0 && keys[DIK_0] != 0) {
		//ボタン押したら次のシーンへ
		InfSchang_->ChangeScene(Gameclear);
	}
#pragma endregion
}

void PlayMode::Draw() {
	Novice::ScreenPrintf(10, 10, "PlayMode");
}