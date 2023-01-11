/*
Let's try working with some other datatypes...
*/

#include <stdio.h>

int main(){

/*
C provides many different datatypes. 
Each one has a set of "valid values". As a programmer,
you must ensure that you are always within this 
valid set of values.
*/

short s = 12; /// valid values: -32768 to 32767
long l = 12; /// valid values: -2147483648 to 2147483647
char c = 'A'; /// valid values: one keyboard letter but also 0-225
unsigned int posValue = 12; /* valid values: 0 - 65535 */
unsigned long posBigValue = 12; /* valid values: 0 - 4294967295 */
float f = 12.5; /* a real value using single-precision */
double d = 12.5; /* a real value using double-precision */

/*
You might wonder about what happens if we walk outside the set of 
"valid values" for a particular datatype.
*/

printf( "A short is stored in your computer in %d bytes\n", sizeof( s ) ); 
printf( "A long is stored in your computer in %d bytes\n", sizeof( l ) );
printf( "A char is stored in your computer in %d bytes\n", sizeof( c ) );
printf( "A unsigned int is stored in %d bytes\n", sizeof( posValue ) ); 
printf( "A unsigned long is stored in %d bytes\n", sizeof( posBigValue ) ); 
printf( "A float is stored in your o-4mputer in %d bytes\n", sizeof( f ) ); 
printf( "A double is stored in your computer in %d bytes\n", sizeof( d ) );

/*
This next section shows you the formatting string for the different 
datatypes shown in this program.
*/

printf( "Here is your short: %hd\n", s );
printf( "Here is your long: %ld\n", l );
printf( "Here is your char: %c\n", c );
printf( "Here is your unsigned int: %u\n", posValue ); 
printf( "Here is your unsigned long: %lu\n", posBigValue ); 
printf( "Here is your float: %f\n", f );
printf( "Here is your double: %lf\n", d );


/*
This next section shows you the formatting string for specifying
a width to the values C prints out.
*/

printf( "float: %5.2f double: %10.4lf\n", f, d );
printf( "Notice the leading spaces before the value of the double!!\n" );

return( 0 );
}