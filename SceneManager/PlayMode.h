#pragma once
#ifndef PlayMode_h
#define PlayMode_h

#include <Novice.h>
#include"SceneManager/SceneManager.h"

//�^�C�g��
class PlayMode : public BaseScene
{
public:
	PlayMode(SceneChangeto* changer);
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	 ~PlayMode()override;
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
