#pragma once
#ifndef Title_h
#define Title_h

#include"SceneManager/SceneManager.h"

//�^�C�g��
class TitleScene : public BaseScene
{
public:
	TitleScene(SceneChangeto* changer);
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	 ~TitleScene()override;
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
