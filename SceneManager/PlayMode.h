#pragma once
#ifndef PlayMode_h
#define PlayMode_h

#include <Novice.h>
#include"SceneManager/SceneManager.h"

//タイトル
class PlayMode : public BaseScene
{
public:
	PlayMode(SceneChangeto* changer);
	/// <summary>
	/// デストラクタ
	/// </summary>
	 ~PlayMode()override;
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
