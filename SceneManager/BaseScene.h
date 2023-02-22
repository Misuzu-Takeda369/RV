#pragma once
#ifndef BaseScene_h
#define BaseScene_h

#include "SMTask.h"
#include "SceneChangeto.h"

//�V�[���̊��N���X
class BaseScene : public SceneTask
{
protected:
	/// <summary>
	/// �摜�̃n���h���̊i�[
	/// </summary>
	int Image;

	///�N���X�̏��L���Ƃɐ؂�ւ���`����z
	SceneChangeto* InfSchang_;
public:

	BaseScene(SceneChangeto* changer);
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	virtual ~BaseScene() {}
	///������
	virtual void Initialize() override;
	///�I��
	virtual void Finakize() override;
	/// <summary>
	/// �`��
	/// </summary>
	/// <returns></returns>
	virtual void Draw() override;
	/// <summary>
	/// �X�V
	/// </summary>
	/// <returns></returns>
	virtual void Update(char* keys, char* preKeys) override;

};
#endif // !1