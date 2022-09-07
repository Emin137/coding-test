using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Program
{
    class Program
    {
        public static void Main()
        {
            int length = int.Parse(Console.ReadLine());
            for (int i = 0; i < length; i++)
            {
                string[] str = Console.ReadLine().Split(' ');
                int x = int.Parse(str[0]);
                int y = int.Parse(str[1]);
                int count = int.Parse(str[2]);
                Queue<(int, int)> queue = new Queue<(int, int)>();

                int[,] arry = new int[x, y];
                int[,] vis = new int[x, y];

                for (int k = 0; k < count; k++)
                {
                    string[] strpos = Console.ReadLine().Split(' ');
                    arry[int.Parse(strpos[0]), int.Parse(strpos[1])] = 1;
                }

                int[] dx = new int[] { 1, 0, -1, 0 };
                int[] dy = new int[] { 0, 1, 0, -1 }; // 상하좌우 네 방향을 의미
                int nG = 0;
                for (int z = 0; z < x; z++)
                {
                    for (int v = 0; v < y; v++)
                    {
                        if (vis[z, v] == 1 || arry[z, v] == 0)
                        {
                            continue;
                        }

                        queue.Enqueue((z, v));
                        nG++;
                        while (queue.Count != 0)
                        {
                            var cur = queue.Dequeue();
                            int curx = cur.Item1;
                            int cury = cur.Item2;
                            //시작 확인

                            // 상하좌우 칸을 살펴볼 것이다.
                            for (int dir = 0; dir < 4; dir++)
                            {
                                int nx = cur.Item1 + dx[dir];
                                int ny = cur.Item2 + dy[dir]; // nx, ny에 dir에서 정한 방향의 인접한 칸의 좌표가 들어감
                                if (nx < 0 || nx >= x || ny < 0 || ny >= y)
                                    continue; // 범위 밖일 경우 넘어감
                                if (vis[nx, ny] == 1 || arry[nx, ny] != 1)
                                    continue; // 이미 방문한 칸이거나 배추칸이 아닐경우

                                vis[nx, ny] = 1; // (nx, ny)를 방문했다고 명시
                                queue.Enqueue((nx, ny));
                            }
                        }
                    }
                }
                Console.WriteLine(nG);
            }


        }
    }
}