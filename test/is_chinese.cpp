#include <windows.h>
int IsGB(PTSTR pText)
{
 unsigned char sqChar[20];
 sqChar[0]=*pText;
 if (sqChar[0]>=0xa1)
  if (sqChar[0]==0xa3)
   return 1;//ȫ���ַ�
  else
   return 2;//����
 else
  return 0;//Ӣ�ġ����֡�Ӣ�ı��
}

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
PSTR szCmdLine, int iCmdShow)
{
 static TCHAR szText[] = {TEXT ("�Ұ���IloveYou")} ;
 PTSTR pText;
 int i;


 pText=szText;
 while (*pText != '\0')
 {
  i=IsGB(pText);
  switch(i)
  {
  case 0:
   pText++;
   MessageBox (NULL, TEXT ("�������֡�Ӣ���ַ���Ӣ�ı��"), TEXT ("Hello"), 0);
   break;
  case 1:
   pText++;
   pText++;
   MessageBox (NULL, TEXT ("����ȫ���ַ�"), TEXT ("Hello"), 0);
   break;
  case 2:
   pText++;
   pText++;
   MessageBox (NULL, TEXT ("���ֺ���"), TEXT ("Hello"), 0);
   break;
  }
 }
 return 0 ;
}
