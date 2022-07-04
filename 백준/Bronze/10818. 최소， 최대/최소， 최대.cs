int caseNum = int.Parse(Console.ReadLine());
            string[] str = Console.ReadLine().Split();
            int minNum = int.Parse(str[0]), maxNum = int.Parse(str[0]);
            for (int i = 0; i < caseNum; i++)
            {
                if (int.Parse(str[i]) < minNum)
                    minNum = int.Parse(str[i]);

                if (int.Parse(str[i]) > maxNum)
                    maxNum = int.Parse(str[i]);
            }
            Console.WriteLine($"{minNum} {maxNum}");