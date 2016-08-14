#include<stdio.h>
#include<math.h>
int main()
{
	float mw,mi,tw,ti,cw=4.19,ci=2.09,e=335,x;
	while(scanf("%f%f%f%f",&mw,&mi,&tw,&ti) && (mw||mi||tw||ti))
	{
		ti=-1*ti;
		if(mi*ci*ti+mi*e<=mw*cw*tw)
		{
			tw=tw-(mi*ci*ti+mi*e)/(mw*cw);
			tw=mw*tw/(mi+mw);
			mw=mw+mi;
			mi=0;
		}
		else if(mw*cw*tw+mw*e<=mi*ci*ti)
		{
			ti=ti-(mw*cw*tw+mw*e)/(mi*ci);
			ti=mi*ti/(mi+mw);
			mi=mi+mw;
			mw=0;
			tw=-1*ti;
		}
		else 
		{
			x=(mw*cw*tw-mi*ci*ti)/e;
			mw=mw+x;
			mi=mi-x;
			tw=0;
		}
		
		printf("%.1f g of ice and %.1f g of water at %.1f C \n",mi,mw,tw);
	}
}
