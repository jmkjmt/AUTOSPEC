
void foo(int y, int z)
{
   int x = 0;

   while(x < 5) {
      x += 1;
      if( z <= y) {
         y = z;
      }
   }

   //post-condition
   assert(z >= y);
}
