/* f4b24àg£IF */

typedef struct {
	LONG nAccessRight;
	int nVersion;
	int nUnicode;

	LPVOID (CALLBACK *LoadMusic)(LPVOID lpszPath);
	void (CALLBACK *FreeMusic)(LPVOID pMusic);
	BOOL (CALLBACK *GetTag)(LPVOID pMusic, LPVOID pTagInfo);
	void (CALLBACK *AddColumn)(HWND hList, int nColumn, LPVOID pLabel, int nWidth, int nFmt);
	LPVOID (CALLBACK *GetFileName)(LPVOID pFileInfo);

	void (CALLBACK *HookOnAlloc)(LPVOID pFileInfo);
	void (CALLBACK *HookOnFree)(LPVOID pFileInfo);
	BOOL (CALLBACK *HookInitColumnOrder)(int nColumn, int nType);
	void (CALLBACK *HookAddColumn)(HWND hList, int nColumn, int nType);
	void (CALLBACK *HookGetColumnText)(LPVOID pFileInfo, int nRow, int nColumn, int nType, LPVOID pBuf, int nBufSize);
	int (CALLBACK *HookCompareColumnText)(LPVOID pFileInfoLeft, LPVOID pFileInfoRight, int nColumn, int nType);
	void (CALLBACK *HookOnSave)();
} F4B24LX_INTERFACE;

