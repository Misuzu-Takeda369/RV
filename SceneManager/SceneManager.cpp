#include <Novice.h>
#include "SceneManager/SceneManager.h"
#include "SceneManager/Title.h"
#include "SceneManager/PlayMode.h"
#include "SceneManager/Gameover.h"
#include "SceneManager/Gameclear.h"

SceneManager::SceneManager() : nextScene_(None) {
	//次のシーンが入ってるやつが空っぽの時 最初のシーンが入る
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
		//次のシーンが用意されていたら現在のシーンの終了処理
		nowScene_->Finakize();
		delete nowScene_;

		//シーンによって変える
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

		//次のシーンの情報を空に
		nextScene_ = None;
		//シーンを初期化
		nowScene_->Initialize();
	}

	//何らかのシーンが動いてる(次のシーンが空)


	nowScene_->Update(keys, preKeys);
}

void SceneManager::Draw() {
	nowScene_->Draw();
}

void SceneManager::ChangeScene(Scene nextScene) {
	nextScene_ = nextScene;
	//次のシーンをセットする
}