# Doxygen综合文档

##### Step1 安装

Mac :   `brew install doxygen`

Linux : `sudo apt-get install doxygen`



##### Step2 配置Doxygen

生成配置文件 `doxygen -g`

此时目录下会生成`Doxyfile`,进入该文件进行配置修改

* **PROJECT_NAME**  项目名称
* **OUTPUT_DIRECTORY**  生成文档的目录
* **INPUT**  待处理的代码文件或目录



##### Step3 编写Doxygen注释

* 实用标记

  | 标记       | 含义                    |
  | ---------- | ----------------------- |
  | @author    | 注释作者                |
  | @date      | 注释日期                |
  | @copyright | 注释版权                |
  | @struct    | 注释一个结构体          |
  | @union     | 注释一个联合体          |
  | @enum      | 注释一个枚举体          |
  | @fn        | 注释一个函数            |
  | @var       | 注释一个变量            |
  | @def       | 注释一个#define         |
  | @typedef   | 注释一个type definition |
  | @file      | 注释一个文件            |
  | @namespace | 注释一个命名空间        |
  | @package   | 注释一个Java package    |
  | @interface | 注释一个IDL interface   |

* 文件注释，放于文件的开头

  ```c++
  /** 
   * @file     hello.h
   * @brief    This is a brief description. 
   * @details  This is the detail description. 
   * @author   author 
   * @date     date 
   * @version  A_1.0
   * @par Copyright (c):  
   *       XX大学 
   * @par History:          
   *       version: author, date, desc\n 
   */
  ```

* 函数注释，放于函数声明前

  ```c++
  /**
   * This is a brief description.
   * This is a detail description.
   * @param[in]	inArgName input argument description.
   * @param[out]	outArgName output argument description. 
   * @retval	OK	成功
   * @retval	ERROR	错误 
   * @par 标识符
   * 		保留
   * @par 其它
   * 		无
   * @par 修改日志
   * 		XXX于20XX-XX-XX创建
   */
  ```

* 类型/宏定义注释，放于宏定义上方或者右侧

  ```c++
  /** Description of the macro */
  #define XXXX_XXX_XX		0
  ```

  或者

  `#define XXXX_XXX_XX		0 ///< Description of the macro.`

* 枚举/结构体注释, 放于数据结构定义前

  ```c++
  /**
   * The brief description.
   * The detail description.
   */
  typedef struct
  {
  	int var1;///< Description of the member variable
  }XXXX;
  ```

* 全局和静态变量

  ```c++
  /**  Description of global variable  */
  int g_xxx = 0;
   
  static int s_xxx = 0; ///<  Description of static variable
  ```



##### Step4 生成文档

配置完成后使用命令生成文件 `doxygen Doxygen`

此时会生成两个文件夹 `html`和`latex` 分别对应不同形式的输出

这里以`html`为例，在`html/index.html`中为所需的输出
