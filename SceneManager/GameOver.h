#pragma once
#ifndef GameOver_h
#define GameOver_h

#include"SceneManager/SceneManager.h"

class GameoverScene : public BaseScene
{
public:
	GameoverScene(SceneChangeto* changer);
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	~GameoverScene()override;
	///������
	void Initialize() override;
	///�I��
	void Finakize() override;
	/// <summary>
	/// �`��
	/// </summary>
	/// <returns></returns>
	void Draw() override;
	/// <summary>
	/// �X�V
	/// </summary>
	/// <returns></returns>
	void Update(char* keys, char* preKeys) override;



};
#endif // !1
