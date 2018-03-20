#include <windows.h>
int IsGB(PTSTR pText)
{
 unsigned char sqChar[20];
 sqChar[0]=*pText;
 if (sqChar[0]>=0xa1)
  if (sqChar[0]==0xa3)
   return 1;//全角字符
  else
   return 2;//汉字
 else
  return 0;//英文、数字、英文标点
}

int WINAPI WinMain (HINSTANCE hInstance, HINSTANCE hPrevInstance,
PSTR szCmdLine, int iCmdShow)
{
 static TCHAR szText[] = {TEXT ("我爱你IloveYou")} ;
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
   MessageBox (NULL, TEXT ("发现数字、英文字符或英文标点"), TEXT ("Hello"), 0);
   break;
  case 1:
   pText++;
   pText++;
   MessageBox (NULL, TEXT ("发现全角字符"), TEXT ("Hello"), 0);
   break;
  case 2:
   pText++;
   pText++;
   MessageBox (NULL, TEXT ("发现汉字"), TEXT ("Hello"), 0);
   break;
  }
 }
 return 0 ;
}
