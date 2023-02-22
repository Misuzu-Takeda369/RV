#pragma once
#ifndef GameOver_h
#define GameOver_h

#include"SceneManager/SceneManager.h"

class GameoverScene : public BaseScene
{
public:
	GameoverScene(SceneChangeto* changer);
	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameoverScene()override;
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
