using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Program
{
    class Program
    {
        static void Main()
        {
            string input = "";
            while (true)
            {
                input = Console.ReadLine();

                if (input == ".")
                    break;

                // :: Initialise
                Stack<String> bracketA = new Stack<String>();
                bool isError = false; // ::: Check Error

                foreach (var itm in input)
                {
                    if (itm.ToString() == "(" || itm.ToString() == "[")
                    {
                        bracketA.Push(itm.ToString());
                    }
                    else if (itm.ToString() == ")" || itm.ToString() == "]")
                    {
                        if (bracketA.Count > 0)
                        {
                            if (bracketA.Peek() == "(")
                            {
                                if (itm.ToString() == ")")
                                {
                                    bracketA.Pop();
                                }
                                else
                                {
                                    isError = true;
                                }
                            }
                            else if (bracketA.Peek() == "[")
                            {
                                if (itm.ToString() == "]")
                                {
                                    bracketA.Pop();
                                }
                                else
                                {
                                    isError = true;
                                }
                            }
                        }
                        else
                        {
                            isError = true;
                        }
                    }
                }

                if (bracketA.Count > 0 || isError == true)
                {
                    Console.WriteLine("no");
                }
                else
                {
                    Console.WriteLine("yes");
                }
            }
        }
    }

}