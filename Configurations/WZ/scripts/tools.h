
double findCrossingOfScan1D(TGraph& graph, double value) {
 double* x = graph.GetX();
 double* y = graph.GetY();
 int imin = 0;
 int n = graph.GetN();
 for (int i=0; i<n; i++) {
  if (y[i] > value) {
   return x[i];
  }
 }
 return -999.;
}



void moveTGraph(TGraph* graph){
 double minLikelihood = 1000;
 double* x = graph->GetX();
 double* y = graph->GetY();
 int imin = 0;
 int n = graph->GetN();
 for (int i=0; i<n; i++) {
  if (y[i] < minLikelihood) {
   minLikelihood = y[i];
  }
 }
 
 //---- minimum of likelihood scan must bo 0
 if (minLikelihood != 0) {
  std::cout << " minLikelihood = " << minLikelihood << std::endl;
  for (int i=0; i<n; i++) {
   graph->SetPoint(i,x[i],y[i]-minLikelihood);
  }
 }
}



