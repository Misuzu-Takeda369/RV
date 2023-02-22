#pragma once
#ifndef Title_h
#define Title_h

#include"SceneManager/SceneManager.h"

//タイトル
class TitleScene : public BaseScene
{
public:
	TitleScene(SceneChangeto* changer);
	/// <summary>
	/// デストラクタ
	/// </summary>
	 ~TitleScene()override;
	///初期化
	void Initialize() override;
	///終了
	void Finakize() override;
	/// <summary>
	/// 描画
	/// </summary>
	/// <returns></returns>
	void Draw() override;
	/// <summary>
	/// 更新
	/// </summary>
	/// <returns></returns>
	void Update(char* keys, char* preKeys) override;



};
#endif // !1
