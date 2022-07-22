using System;
using System.Text;
using System.Linq;
using System.Collections.Generic;
using System.Collections;


namespace Program
{
    class Program
    {
       static void Main()
        {
            int input = int.Parse(Console.ReadLine());
            int inputNum;
            Stack<int> stack = new Stack<int>();
            int pushCount = 1;
            int popCount = 0;
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < input; i++)
            {
                inputNum = int.Parse(Console.ReadLine());
                while(inputNum>=pushCount)
                {
                    sb.AppendLine("+");
                    stack.Push(pushCount);
                    pushCount++;
                }

                if(inputNum == stack.Peek())
                {
                    stack.Pop();
                    sb.AppendLine("-");
                    popCount++;
                }
            }
            if(popCount == input)
                Console.WriteLine(sb);
            else
                Console.WriteLine("NO");
        }
    }
}
