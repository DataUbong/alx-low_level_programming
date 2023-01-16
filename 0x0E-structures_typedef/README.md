0x0E. C - Structures, typedef
A struct in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.)

Besides functions you can also write documentation for structs, unions, enums and typedefs.
Instead of the function name you must write the name of the declaration;
the struct/union/enum/typedef must always precede the name. Nesting of declarations is not supported.
Use the argument mechanism to document members or constants.

Example:
/**
 * struct my_struct - Short description
 * @a: First member
 * @b: Second member
 * @c: Third member
 *
 * Description: Longer description
 */
struct my_struct
{
	int a;
	int b;
	int c;
};
