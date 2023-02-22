#pragma once
#ifndef Scenemanager_h
#define Scenemanager_h

#include "SceneManager/SceneChangeto.h"
#include "SceneManager/BaseScene.h"

//シーンを管理するクラス(管理用とベースから継承)
class SceneManager : public SceneChangeto,SceneTask
{
public:
	/// <summary>
	/// ストラクタ
	/// </summary>
	SceneManager();
	/// <summary>
	/// デストラクタ
	/// </summary>
	virtual ~SceneManager() override;
	///初期化
	virtual void Initialize() override;
	///終了
	virtual void Finakize() override;
	/// <summary>
	/// 描画
	/// </summary>
	/// <returns></returns>
	virtual void Draw() override;
	/// <summary>
	/// 更新
	/// </summary>
	/// <returns></returns>
	virtual void Update(char* keys, char* preKeys) override;
	/// <summary>
	/// 次のシーンに変更する奴
	/// </summary>
	/// <param name="NextScene_"></param>
	void ChangeScene(Scene nextScene)override;

private:
	/// <summary>
	/// シーン管理の変数
	/// </summary>
	BaseScene* nowScene_;
	/// <summary>
	/// 次のシーンの管理変数
	/// </summary>
	Scene nextScene_;
	

};

#endif // !1