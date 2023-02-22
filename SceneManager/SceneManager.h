#pragma once
#ifndef Scenemanager_h
#define Scenemanager_h

#include "SceneManager/SceneChangeto.h"
#include "SceneManager/BaseScene.h"

//�V�[�����Ǘ�����N���X(�Ǘ��p�ƃx�[�X����p��)
class SceneManager : public SceneChangeto,SceneTask
{
public:
	/// <summary>
	/// �X�g���N�^
	/// </summary>
	SceneManager();
	/// <summary>
	/// �f�X�g���N�^
	/// </summary>
	virtual ~SceneManager() override;
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
	/// <summary>
	/// ���̃V�[���ɕύX����z
	/// </summary>
	/// <param name="NextScene_"></param>
	void ChangeScene(Scene nextScene)override;

private:
	/// <summary>
	/// �V�[���Ǘ��̕ϐ�
	/// </summary>
	BaseScene* nowScene_;
	/// <summary>
	/// ���̃V�[���̊Ǘ��ϐ�
	/// </summary>
	Scene nextScene_;
	

};

#endif // !1