using System;
using System.Linq;
using System.Collections;
					
public static class Program
{
	public static void Main()
	{
		Func<int> a = () => int.Parse(Console.ReadLine());
		Console.WriteLine("X = " + (a() + a()));
	}
	
	public static void Print(this IEnumerable x){
		foreach(var i in x)
			Console.Write($"{i} ");
		Console.WriteLine();
	}
}