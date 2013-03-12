/* { dg-do compile } */
/* { dg-options "-O2 -mbitops" } */

decode_i_s1 (int a, int b)
{
  b = (b >> 5) & 31;
  return a  | 16 << b;
}
/* { dg-final { scan-assembler "decode_i\.cl\[ \t\]" } } */
