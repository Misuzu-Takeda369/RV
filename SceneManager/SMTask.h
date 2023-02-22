#pragma once
//シーン関連の基準のクラス
#ifndef SMTask_h
#define SMTask_h

class SceneTask
{
public:
	SceneTask() {};
	virtual ~SceneTask() {};

	///初期化
	virtual void Initialize() {};
	///終了
	virtual void Finakize() {};
	///更新
	virtual void Update(char* keys, char* preKeys) {};
	///描写
	virtual void Draw() {};

private:

};

#endif // !1