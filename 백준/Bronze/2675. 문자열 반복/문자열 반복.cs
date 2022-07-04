int caseNum = int.Parse(Console.ReadLine());
            string str = "";
            
            for (int i = 0; i < caseNum; i++)
            {
                string[] input = Console.ReadLine().Split();
                for (int j = 0; j < input[1].Length; j++)
                {
                    for (int k = 0; k < int.Parse(input[0]); k++)
                    {
                        str += input[1][j];
                    }
                }
                Console.WriteLine(str);
                str = "";
            }