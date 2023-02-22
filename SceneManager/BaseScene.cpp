#include "Scenemanager/BaseScene.h"


BaseScene::BaseScene(SceneChangeto* changer) : Image(0){ 
	//切り替え用クラスに今のシーンを伝える
	InfSchang_ = changer;
}

void BaseScene::Initialize() {

}

void BaseScene::Finakize() {
	//かまたえんじんだとそれぞれにかく必要がある
	//Novice::Novice::UnLoadTexture("なんかの画像");
}

void BaseScene::Update(char* keys, char* preKeys) {

}

void BaseScene::Draw() {
	//かまたえんじんだとそれぞれにかく必要がある
}