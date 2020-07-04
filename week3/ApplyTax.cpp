
double ApplyTax(double amount)
{
	double salesAmount = amount;
	double taxRate = 0.0875;
	double amountTaxed = amount * taxRate;
	double finalAmount = salesAmount + amountTaxed;
	return finalAmount;
}