string[] input = Console.ReadLine().Split();
            int lineK = int.Parse(input[0]);
            int lineN = int.Parse(input[1]);

            List<long> list = new List<long>();

            for (int i = 0; i < lineK; i++)
            {
                list.Add(int.Parse(Console.ReadLine()));
            }

            
            long start = 1;
            long end = list.Max();
            long middle;
            long sum = 0;

            while(true)
            {
                if (start > end)
                    break;

                middle = (start + end) / 2;

                for (int i = 0; i < lineK; i++)
                {
                    sum += list[i] / middle;
                }

                if (sum >= lineN)
                    start = middle + 1;
                else
                    end = middle - 1;
                sum = 0;
            }
            Console.WriteLine(end);