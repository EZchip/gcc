/* { dg-do compile } */
/* { dg-options "-O2 -mbitops" } */

int
f (void)
{
  return 0xd00d;
}

int
g (void)
{
  return 0x7ff00000;
}

/* { dg-final { scan-assembler "movl\.cl\[ \t\]" } } */
/* { dg-final { scan-assembler "movh\.cl\[ \t\]" } } */
