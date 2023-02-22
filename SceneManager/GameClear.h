#pragma once
#ifndef GameClear_h
#define GameClear_h

class GameclearScene : public BaseScene
{
public:
	GameclearScene(SceneChangeto* changer);
	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameclearScene() override;
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
