桂梦婷09.11工作日志

完成内容：

>帮助界面的整体布局（按钮跳转和内容未完成）
>
>登录界面所有内容
>
>> 添加了提示框，以及用户名中出现分号时的小tips
>>
>> 添加了回车后跳转到下一个输入框/登录
>
>

未完成内容：

> 个人中心-安全设置-密保验证的下一步按钮/窗体名称
>
> 个人中心-退出登录后所有窗体关闭
>
> 个人中心-修改用户名/修改头像的按钮
>
> 邮箱主页面-登出后关闭所有窗体
>
> 界面设置及界面背景等



可能有参考价值的内容：

> 鼠标移到内容上(悬停)出现小tip

头文件：#include <QToolTip>

```q
ui -> name_le -> setToolTip(tr("请勿输入分号！"));
```



> 输入框有灰色提示

```c++
ui -> name_le ->setPlaceholderText(tr("请输入数字，英文字母或英文符号(分号除外)"));
```



> 一个页面中有多个子窗口（详情请阅读help的代码）

主页面：继承自Widget

子页面：继承自Widget，且显示在主页面Widget控件中（UI中设置）



>限定输入框输入内容（比如只能输入数字等）-使用正则表达式

头文件：#include <QRegExpValidator>

内容：

```c++
QRegExpValidator *pRevalidotor = new QRegExpValidator(QRegExp("[a-zA-Z0-9!-/:-?]{25}"), this);//[]内部填写可以输入的内容，以ASCII码存放的位置作为参考，{}表示最多输入（不确定）
    ui-> name_le ->setValidator(pRevalidotor);//把lineedit和正则表达式绑定
```

> 回车后跳转到下一个登录框（详见LogInWindow）

头文件：#include <QKeyEvent>

设置槽函数（重载）：

```
void keyPressEvent(QKeyEvent * event);
```

判断是否是回车：

```
if(event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter)
```