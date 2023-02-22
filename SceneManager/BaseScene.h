#pragma once
#ifndef BaseScene_h
#define BaseScene_h

#include "SMTask.h"
#include "SceneChangeto.h"

//シーンの基底クラス
class BaseScene : public SceneTask
{
protected:
	/// <summary>
	/// 画像のハンドルの格納
	/// </summary>
	int Image;

	///クラスの所有もとに切り替えを伝える奴
	SceneChangeto* InfSchang_;
public:

	BaseScene(SceneChangeto* changer);
	/// <summary>
	/// デストラクタ
	/// </summary>
	virtual ~BaseScene() {}
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

};
#endif // !1