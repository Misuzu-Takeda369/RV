#pragma once
//�V�[���֘A�̊�̃N���X
#ifndef SMTask_h
#define SMTask_h

class SceneTask
{
public:
	SceneTask() {};
	virtual ~SceneTask() {};

	///������
	virtual void Initialize() {};
	///�I��
	virtual void Finakize() {};
	///�X�V
	virtual void Update(char* keys, char* preKeys) {};
	///�`��
	virtual void Draw() {};

private:

};

#endif // !1