#pragma once
#ifndef Object_h
#define Object_h

#include "Object/Struct.h"

class Object
{
public:

	//�v���C���[�h�ɌĂ΂��̂ł̂�pubic��
	
	virtual ~Object();
	///������
	virtual void Initialize();
	///�I��
	virtual void Finakize();
	/// <summary>
	/// �`��
	/// </summary>
	/// <returns></returns>
	virtual void Draw();
	/// <summary>
	/// �X�V
	/// </summary>
	/// <returns></returns>
	virtual void Update(char* keys, char* preKeys);


private:
	//�x�[�X�X�e�[�^�X
	ObjectState* transform_;

};



#endif
