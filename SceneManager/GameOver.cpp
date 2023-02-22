#include <Novice.h>
#include "SceneManager/SceneManager.h"
#include "SceneManager/GameOver.h"


GameoverScene::GameoverScene(SceneChangeto* changer) : BaseScene(changer) {

}


GameoverScene::~GameoverScene() {

}

void GameoverScene::Initialize()
{
	//ガメオベラロード
}

void GameoverScene::Finakize()
{

}

void GameoverScene::Update(char* keys, char* preKeys) {



	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE] != 0) {
		//ボタン押したら次のシーンへ
		InfSchang_->ChangeScene(Title);
	}

}

void GameoverScene::Draw() {
	Novice::ScreenPrintf(10, 10, "GameOver");
}