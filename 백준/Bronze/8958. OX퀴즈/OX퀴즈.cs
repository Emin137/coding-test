int caseNum = int.Parse(Console.ReadLine());
            int score = 0;
            int count = 0;
            for (int i = 0; i < caseNum; i++)
            {
                string str = Console.ReadLine();
                for (int j = 0; j < str.Length; j++)
                {
                    if (str[j] == 'O')
                    {
                        score += 1 + count;
                        count++;
                    }
                    else
                    {
                        count = 0;
                    }
                }
                Console.WriteLine(score);
                score = 0;
                count = 0;
            }