string input = Console.ReadLine();
            string[] inputScore = Console.ReadLine().Split();
            double[] score = new double[inputScore.Length];
            double output = 0;
            double max = 0;
            for (int i = 0; i < score.Length; i++)
            {
                score[i] = double.Parse(inputScore[i]);
            }

            for (int i = 0; i < score.Length; i++)
            {
                if (score[i]>max)
                    max = score[i];
            }

            for (int i = 0; i < score.Length; i++)
            {
                    output += score[i] / max * 100;
            }

            Console.WriteLine(output/score.Length);
            