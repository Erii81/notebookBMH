#define MaxBlockNum 2
#define MaxNameNum 100

Typedef struct line {
	shar name[MaxNameNum];
	struct line* next;
	struct line* prior;
}Line;

Typedef struct text {
	int linenum Int blocknum;
	line* first Struct text* next;
	struct text* prior;
}Text;

Class MiniWord{
public:
	MiniWord();
	~MiniWord()

	int Cursor_Operate();
	int Dele();
	int Insert_Text();
	int New_File();
	int Open_File Save_File();
	int ReSave_FIle() Find();
	int Replace() Block_Copy();	//[]     \ 
	int Block_Delete();	//[]     enter
private:
	Text* Text_head;
	Text* Text_cur;
	Line* Line_cur;
	int char_cur
		//两个文件变量
		//一个路径变量
}
