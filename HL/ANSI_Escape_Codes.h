
#define ANSI_Position_H(Line,column) printf("\033[%d;%dH",Line,column); //设置光标位置
#define ANSI_Position_f(Line,column) printf("\033[%d;%df",Line,column); //设置光标位置
//Moves the cursor to the specified position (coordinates).If you do not specify a position, the cursor moves to the home position at the upper-left corner of the screen (line 0, column 0). This escape sequence works the same way as the following Cursor Position escape sequence. 
#define ANSI_Up(Value) printf("\033[%dA",Value); //光标上移n行
//Moves the cursor up by the specified number of lines without changing columns. If the cursor is already on the top line, ANSI.SYS ignores this sequence. 
#define ANSI_Down(Value) printf("\033[%dB",Value); //光标下移n行
//Moves the cursor down by the specified number of lines without changing columns. If the cursor is already on the bottom line, ANSI.SYS ignores this sequence. 
#define ANSI_Forward(Value) printf("\033[%dC",Value); //光标右移n列
//Moves the cursor forward by the specified number of columns without changing lines. If the cursor is already in the rightmost column, ANSI.SYS ignores this sequence. 
#define ANSI_Backward(Value) printf("\033[%dD",Value); //光标左移n列
//Moves the cursor back by the specified number of columns without changing lines. If the cursor is already in the leftmost column, ANSI.SYS ignores this sequence. 
#define ANSI_Save printf("\033[s"); //保存光标位置
//Saves the current cursor position. You can move the cursor to the saved cursor position by using the Restore Cursor Position sequence. 
#define ANSI_Restore printf("\033[u"); //恢复光标位置
//Returns the cursor to the position stored by the Save Cursor Position sequence. 
#define ANSI_Erase_Display printf("\033[2J"); //清屏
//Clears the screen and moves the cursor to the home position (line 0, column 0). 
#define ANSI_Erase_Line printf("\033[K"); //清除从光标到行尾的内容
//Clears all characters from the cursor position to the end of the line (including the character at the cursor position). 

/*Esc[Value;...;Valuem
Set Graphics Mode: 
Calls the graphics functions specified by the following values. 
These specified functions remain active until the next occurrence of this escape sequence. 
Graphics mode changes the colors and attributes of text (such as bold and underline) displayed on the screen.
*/
#define ANSI_All_Atti_Off printf("\033[0m"); //关闭所有属性
#define ANSI_Bold printf("\033[1m"); //设置高亮度
#define ANSI_Underscore printf("\033[4m"); //下划线
#define ANSI_Blink printf("\033[5m"); //闪烁
#define ANSI_Reverse printf("\033[7m"); //反显
#define ANSI_Concealed printf("\033[8m"); //消隐

#define ANSI_Fg_Black printf("\033[30m"); //黑色字体
#define ANSI_Fg_Ren printf("\033[31m"); //红色字体
#define ANSI_Fg_Green printf("\033[32m"); //绿色字体
#define ANSI_Fg_Yellow printf("\033[33m"); //黄色字体
#define ANSI_Fg_Blue printf("\033[34m"); //蓝色字体
#define ANSI_Fg_Magenta printf("\033[35m"); //品红色字体
#define ANSI_Fg_Cyan printf("\033[36m"); //青色字体
#define ANSI_Fg_White printf("\033[37m"); //白色字体

#define ANSI_Bg_Black printf("\033[40m"); //黑色背景
#define ANSI_Bg_Ren printf("\033[41m"); //红色背景
#define ANSI_Bg_Green printf("\033[42m"); //绿色背景
#define ANSI_Bg_Yellow printf("\033[43m"); //黄色背景
#define ANSI_Bg_Blue printf("\033[44m"); //蓝色背景
#define ANSI_Bg_Magenta printf("\033[45m"); //品红色背景
#define ANSI_Bg_Cyan printf("\033[46m"); //青色背景
#define ANSI_Bg_White printf("\033[47m"); //白色背景

