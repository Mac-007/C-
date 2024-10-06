# include <iostream>  // input output stream header file
/** 
* The <iostream> header file is used for input and output operations in C++. 
* It defines the standard stream objects like 'std::cin' for input, 'std::cout' for output,
* 'std::cerr' for error messages, and 'std::clog' for logging. These allow us to perform 
* operations such as reading from the console and writing output to the console.
*/

/**
 * The 'main' function is the entry point of any C++ program. 
 * It has a return type 'int' because the program returns an integer value to the operating system.
 * A return value of 0 traditionally indicates successful execution, while non-zero values indicate errors.
 * Other return types like 'str' or 'void' are not allowed in standard C++ because the system expects an 'int' return. 
 */
int main()
{
    std::cout << "Hello, World!" << std::endl;  /* std::cout is short for "character output" */

    /* std::endl is often used to move the cursor to the next line, similar to '\n', 
   but the key difference is that std::endl also forces a flush of the output buffer. 
   Thismeans sending the data stored in the program's output buffer to its destination 
   (like the console or a file) immediately */

    return 0;
}

/**
 * std::cout - Standard output stream in C++
 * 
 * std::cout is used to print data to the console. It is part of the <iostream> header 
 * and resides in the 'std' namespace. The '<<' (insertion operator) is used with 'std::cout'
 * to send data to the output stream for display.
 *
 * The 'std' prefix indicates that 'cout' belongs to the standard namespace.
 */


/**
 * std::endl - Line break and flush in C++
 * 
 * std::endl is used to insert a newline character into the output stream (similar to '\n') 
 * and flush the output buffer. Flushing ensures that the output is immediately sent to the 
 * display or output device, which can be important when dealing with real-time output.
 *
 * This will print "Hello, World!" followed by a newline and flush the output stream.
 */



