using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
 
namespace _1074
{
    class Program
    {
        int Recur(int size, int row, int col)
        {
            if (size == 0)
                return 0;
 
            if(row < size / 2)
            {
                //왼쪽 위
                if(col < size / 2)
                {
                    return this.Recur(size / 2, row, col);
                }
 
                //오른쪽 위
                else
                {
                    return (size * size / 4)
                        + this.Recur(size / 2, row, col - size / 2);
                }
            }
 
            else
            {
                //왼쪽 아래.
                if(col < size / 2)
                {
                    return (size * size / 2)
                        + this.Recur(size / 2, row - size / 2, col);
                }
 
                //오른쪽 아래.
                else
                {
                    return (size * size / 4 * 3)
                        + this.Recur(size / 2, row - size / 2, col - size / 2);
                }
 
            }
        }
 
        static void Main(string[] args)
        {
            string[] splitInput = Console.ReadLine().Split(' ');
            int matSize = (int)Math.Pow(2, int.Parse(splitInput[0]));
            int row = int.Parse(splitInput[1]);
            int col = int.Parse(splitInput[2]);
 
   
            Console.WriteLine(new Program().Recur(matSize, row, col));
        }
    }
}