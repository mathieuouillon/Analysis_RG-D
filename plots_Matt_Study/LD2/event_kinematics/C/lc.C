#ifdef __CLING__
#pragma cling optimize(0)
#endif
void lc()
{
//=========Macro generated from canvas: c1/
//=========  (Sat Oct 26 16:00:07 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-0.7894737,-83853.47,5.789474,614925.5);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("");
   hs->SetMaximum(531072);
   
   TH1F *hs_stack_43 = new TH1F("hs_stack_43","",200,0,5);
   hs_stack_43->SetMinimum(0);
   hs_stack_43->SetMaximum(531072);
   hs_stack_43->SetDirectory(nullptr);
   hs_stack_43->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_43->SetLineColor(ci);
   hs_stack_43->SetLineWidth(0);
   hs_stack_43->GetXaxis()->SetTitle("L_{c} [fm]");
   hs_stack_43->GetXaxis()->SetLabelFont(42);
   hs_stack_43->GetXaxis()->SetTitleSize(0.05);
   hs_stack_43->GetXaxis()->SetTitleOffset(1);
   hs_stack_43->GetXaxis()->SetTitleFont(42);
   hs_stack_43->GetYaxis()->SetLabelFont(42);
   hs_stack_43->GetYaxis()->SetTitleFont(42);
   hs_stack_43->GetZaxis()->SetLabelFont(42);
   hs_stack_43->GetZaxis()->SetTitleOffset(1);
   hs_stack_43->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_43);
   
   
   TH1F *lc_stack_1 = new TH1F("lc_stack_1","",200,0,5);
   lc_stack_1->SetBinContent(0,286);
   lc_stack_1->SetBinContent(1,46);
   lc_stack_1->SetBinContent(2,88);
   lc_stack_1->SetBinContent(3,144);
   lc_stack_1->SetBinContent(4,269);
   lc_stack_1->SetBinContent(5,764);
   lc_stack_1->SetBinContent(6,2242);
   lc_stack_1->SetBinContent(7,3536);
   lc_stack_1->SetBinContent(8,7792);
   lc_stack_1->SetBinContent(9,17342);
   lc_stack_1->SetBinContent(10,32014);
   lc_stack_1->SetBinContent(11,59180);
   lc_stack_1->SetBinContent(12,97165);
   lc_stack_1->SetBinContent(13,137843);
   lc_stack_1->SetBinContent(14,178585);
   lc_stack_1->SetBinContent(15,217713);
   lc_stack_1->SetBinContent(16,252944);
   lc_stack_1->SetBinContent(17,284843);
   lc_stack_1->SetBinContent(18,313051);
   lc_stack_1->SetBinContent(19,338015);
   lc_stack_1->SetBinContent(20,360175);
   lc_stack_1->SetBinContent(21,377557);
   lc_stack_1->SetBinContent(22,391749);
   lc_stack_1->SetBinContent(23,405596);
   lc_stack_1->SetBinContent(24,415979);
   lc_stack_1->SetBinContent(25,424548);
   lc_stack_1->SetBinContent(26,429686);
   lc_stack_1->SetBinContent(27,435698);
   lc_stack_1->SetBinContent(28,437468);
   lc_stack_1->SetBinContent(29,437731);
   lc_stack_1->SetBinContent(30,442560);
   lc_stack_1->SetBinContent(31,440105);
   lc_stack_1->SetBinContent(32,438791);
   lc_stack_1->SetBinContent(33,436641);
   lc_stack_1->SetBinContent(34,434367);
   lc_stack_1->SetBinContent(35,433597);
   lc_stack_1->SetBinContent(36,428996);
   lc_stack_1->SetBinContent(37,424516);
   lc_stack_1->SetBinContent(38,421954);
   lc_stack_1->SetBinContent(39,418285);
   lc_stack_1->SetBinContent(40,412984);
   lc_stack_1->SetBinContent(41,409029);
   lc_stack_1->SetBinContent(42,404284);
   lc_stack_1->SetBinContent(43,400170);
   lc_stack_1->SetBinContent(44,396772);
   lc_stack_1->SetBinContent(45,390065);
   lc_stack_1->SetBinContent(46,384687);
   lc_stack_1->SetBinContent(47,382001);
   lc_stack_1->SetBinContent(48,375970);
   lc_stack_1->SetBinContent(49,370326);
   lc_stack_1->SetBinContent(50,365959);
   lc_stack_1->SetBinContent(51,361508);
   lc_stack_1->SetBinContent(52,355409);
   lc_stack_1->SetBinContent(53,349620);
   lc_stack_1->SetBinContent(54,346833);
   lc_stack_1->SetBinContent(55,340454);
   lc_stack_1->SetBinContent(56,337179);
   lc_stack_1->SetBinContent(57,330846);
   lc_stack_1->SetBinContent(58,327675);
   lc_stack_1->SetBinContent(59,321965);
   lc_stack_1->SetBinContent(60,317406);
   lc_stack_1->SetBinContent(61,311348);
   lc_stack_1->SetBinContent(62,308283);
   lc_stack_1->SetBinContent(63,303215);
   lc_stack_1->SetBinContent(64,298375);
   lc_stack_1->SetBinContent(65,294586);
   lc_stack_1->SetBinContent(66,289288);
   lc_stack_1->SetBinContent(67,285708);
   lc_stack_1->SetBinContent(68,281348);
   lc_stack_1->SetBinContent(69,278552);
   lc_stack_1->SetBinContent(70,273846);
   lc_stack_1->SetBinContent(71,269643);
   lc_stack_1->SetBinContent(72,265500);
   lc_stack_1->SetBinContent(73,260719);
   lc_stack_1->SetBinContent(74,258126);
   lc_stack_1->SetBinContent(75,254242);
   lc_stack_1->SetBinContent(76,250460);
   lc_stack_1->SetBinContent(77,245647);
   lc_stack_1->SetBinContent(78,243274);
   lc_stack_1->SetBinContent(79,239380);
   lc_stack_1->SetBinContent(80,235881);
   lc_stack_1->SetBinContent(81,231928);
   lc_stack_1->SetBinContent(82,229642);
   lc_stack_1->SetBinContent(83,225299);
   lc_stack_1->SetBinContent(84,223912);
   lc_stack_1->SetBinContent(85,220703);
   lc_stack_1->SetBinContent(86,216035);
   lc_stack_1->SetBinContent(87,213000);
   lc_stack_1->SetBinContent(88,211519);
   lc_stack_1->SetBinContent(89,209049);
   lc_stack_1->SetBinContent(90,204620);
   lc_stack_1->SetBinContent(91,201205);
   lc_stack_1->SetBinContent(92,197540);
   lc_stack_1->SetBinContent(93,195017);
   lc_stack_1->SetBinContent(94,192277);
   lc_stack_1->SetBinContent(95,189262);
   lc_stack_1->SetBinContent(96,185445);
   lc_stack_1->SetBinContent(97,182915);
   lc_stack_1->SetBinContent(98,181224);
   lc_stack_1->SetBinContent(99,177916);
   lc_stack_1->SetBinContent(100,174873);
   lc_stack_1->SetBinContent(101,172053);
   lc_stack_1->SetBinContent(102,168498);
   lc_stack_1->SetBinContent(103,166118);
   lc_stack_1->SetBinContent(104,162561);
   lc_stack_1->SetBinContent(105,159284);
   lc_stack_1->SetBinContent(106,155525);
   lc_stack_1->SetBinContent(107,152160);
   lc_stack_1->SetBinContent(108,149179);
   lc_stack_1->SetBinContent(109,146075);
   lc_stack_1->SetBinContent(110,142202);
   lc_stack_1->SetBinContent(111,138831);
   lc_stack_1->SetBinContent(112,136789);
   lc_stack_1->SetBinContent(113,133831);
   lc_stack_1->SetBinContent(114,130240);
   lc_stack_1->SetBinContent(115,127723);
   lc_stack_1->SetBinContent(116,125496);
   lc_stack_1->SetBinContent(117,122496);
   lc_stack_1->SetBinContent(118,120723);
   lc_stack_1->SetBinContent(119,118207);
   lc_stack_1->SetBinContent(120,115893);
   lc_stack_1->SetBinContent(121,113758);
   lc_stack_1->SetBinContent(122,112134);
   lc_stack_1->SetBinContent(123,109734);
   lc_stack_1->SetBinContent(124,108318);
   lc_stack_1->SetBinContent(125,105733);
   lc_stack_1->SetBinContent(126,104609);
   lc_stack_1->SetBinContent(127,102865);
   lc_stack_1->SetBinContent(128,101141);
   lc_stack_1->SetBinContent(129,99052);
   lc_stack_1->SetBinContent(130,97509);
   lc_stack_1->SetBinContent(131,97632);
   lc_stack_1->SetBinContent(132,95031);
   lc_stack_1->SetBinContent(133,94221);
   lc_stack_1->SetBinContent(134,92925);
   lc_stack_1->SetBinContent(135,91312);
   lc_stack_1->SetBinContent(136,89389);
   lc_stack_1->SetBinContent(137,87806);
   lc_stack_1->SetBinContent(138,86555);
   lc_stack_1->SetBinContent(139,85487);
   lc_stack_1->SetBinContent(140,84331);
   lc_stack_1->SetBinContent(141,83607);
   lc_stack_1->SetBinContent(142,81368);
   lc_stack_1->SetBinContent(143,80357);
   lc_stack_1->SetBinContent(144,78987);
   lc_stack_1->SetBinContent(145,78214);
   lc_stack_1->SetBinContent(146,76068);
   lc_stack_1->SetBinContent(147,74976);
   lc_stack_1->SetBinContent(148,74486);
   lc_stack_1->SetBinContent(149,73200);
   lc_stack_1->SetBinContent(150,71388);
   lc_stack_1->SetBinContent(151,70684);
   lc_stack_1->SetBinContent(152,68875);
   lc_stack_1->SetBinContent(153,68025);
   lc_stack_1->SetBinContent(154,66930);
   lc_stack_1->SetBinContent(155,65411);
   lc_stack_1->SetBinContent(156,63779);
   lc_stack_1->SetBinContent(157,62693);
   lc_stack_1->SetBinContent(158,61952);
   lc_stack_1->SetBinContent(159,60727);
   lc_stack_1->SetBinContent(160,59080);
   lc_stack_1->SetBinContent(161,58483);
   lc_stack_1->SetBinContent(162,57085);
   lc_stack_1->SetBinContent(163,55385);
   lc_stack_1->SetBinContent(164,54360);
   lc_stack_1->SetBinContent(165,52893);
   lc_stack_1->SetBinContent(166,52270);
   lc_stack_1->SetBinContent(167,50941);
   lc_stack_1->SetBinContent(168,49304);
   lc_stack_1->SetBinContent(169,48333);
   lc_stack_1->SetBinContent(170,47038);
   lc_stack_1->SetBinContent(171,46097);
   lc_stack_1->SetBinContent(172,44566);
   lc_stack_1->SetBinContent(173,43797);
   lc_stack_1->SetBinContent(174,42503);
   lc_stack_1->SetBinContent(175,41496);
   lc_stack_1->SetBinContent(176,40409);
   lc_stack_1->SetBinContent(177,38535);
   lc_stack_1->SetBinContent(178,37485);
   lc_stack_1->SetBinContent(179,36047);
   lc_stack_1->SetBinContent(180,35127);
   lc_stack_1->SetBinContent(181,34429);
   lc_stack_1->SetBinContent(182,32621);
   lc_stack_1->SetBinContent(183,31510);
   lc_stack_1->SetBinContent(184,30638);
   lc_stack_1->SetBinContent(185,29294);
   lc_stack_1->SetBinContent(186,27724);
   lc_stack_1->SetBinContent(187,26435);
   lc_stack_1->SetBinContent(188,25714);
   lc_stack_1->SetBinContent(189,24262);
   lc_stack_1->SetBinContent(190,23187);
   lc_stack_1->SetBinContent(191,21853);
   lc_stack_1->SetBinContent(192,20521);
   lc_stack_1->SetBinContent(193,19734);
   lc_stack_1->SetBinContent(194,18472);
   lc_stack_1->SetBinContent(195,18143);
   lc_stack_1->SetBinContent(196,16736);
   lc_stack_1->SetBinContent(197,15765);
   lc_stack_1->SetBinContent(198,14531);
   lc_stack_1->SetBinContent(199,13511);
   lc_stack_1->SetBinContent(200,12854);
   lc_stack_1->SetBinContent(201,114840);
   lc_stack_1->SetEntries(3.530097e+07);
   lc_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   3.530097e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.716");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.047");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   lc_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(lc_stack_1);

   ci = TColor::GetColor("#121415");
   lc_stack_1->SetLineColor(ci);
   lc_stack_1->GetXaxis()->SetLabelFont(42);
   lc_stack_1->GetXaxis()->SetTitleOffset(1);
   lc_stack_1->GetXaxis()->SetTitleFont(42);
   lc_stack_1->GetYaxis()->SetLabelFont(42);
   lc_stack_1->GetYaxis()->SetTitleFont(42);
   lc_stack_1->GetZaxis()->SetLabelFont(42);
   lc_stack_1->GetZaxis()->SetTitleOffset(1);
   lc_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(lc_stack_1,"sames histo");
   
   TH1F *lc_cut_stack_2 = new TH1F("lc_cut_stack_2","",200,0,5);
   lc_cut_stack_2->SetBinContent(12,68);
   lc_cut_stack_2->SetBinContent(13,323);
   lc_cut_stack_2->SetBinContent(14,1632);
   lc_cut_stack_2->SetBinContent(15,5219);
   lc_cut_stack_2->SetBinContent(16,15589);
   lc_cut_stack_2->SetBinContent(17,36822);
   lc_cut_stack_2->SetBinContent(18,67337);
   lc_cut_stack_2->SetBinContent(19,103581);
   lc_cut_stack_2->SetBinContent(20,148359);
   lc_cut_stack_2->SetBinContent(21,188734);
   lc_cut_stack_2->SetBinContent(22,230384);
   lc_cut_stack_2->SetBinContent(23,262531);
   lc_cut_stack_2->SetBinContent(24,278902);
   lc_cut_stack_2->SetBinContent(25,285209);
   lc_cut_stack_2->SetBinContent(26,282319);
   lc_cut_stack_2->SetBinContent(27,274465);
   lc_cut_stack_2->SetBinContent(28,264894);
   lc_cut_stack_2->SetBinContent(29,253997);
   lc_cut_stack_2->SetBinContent(30,246262);
   lc_cut_stack_2->SetBinContent(31,235637);
   lc_cut_stack_2->SetBinContent(32,222088);
   lc_cut_stack_2->SetBinContent(33,212177);
   lc_cut_stack_2->SetBinContent(34,204680);
   lc_cut_stack_2->SetBinContent(35,192457);
   lc_cut_stack_2->SetBinContent(36,179146);
   lc_cut_stack_2->SetBinContent(37,170102);
   lc_cut_stack_2->SetBinContent(38,160990);
   lc_cut_stack_2->SetBinContent(39,151164);
   lc_cut_stack_2->SetBinContent(40,143565);
   lc_cut_stack_2->SetBinContent(41,135150);
   lc_cut_stack_2->SetBinContent(42,126327);
   lc_cut_stack_2->SetBinContent(43,118558);
   lc_cut_stack_2->SetBinContent(44,112659);
   lc_cut_stack_2->SetBinContent(45,105468);
   lc_cut_stack_2->SetBinContent(46,100300);
   lc_cut_stack_2->SetBinContent(47,96611);
   lc_cut_stack_2->SetBinContent(48,89216);
   lc_cut_stack_2->SetBinContent(49,84830);
   lc_cut_stack_2->SetBinContent(50,80699);
   lc_cut_stack_2->SetBinContent(51,74562);
   lc_cut_stack_2->SetBinContent(52,72267);
   lc_cut_stack_2->SetBinContent(53,67235);
   lc_cut_stack_2->SetBinContent(54,63614);
   lc_cut_stack_2->SetBinContent(55,59517);
   lc_cut_stack_2->SetBinContent(56,57222);
   lc_cut_stack_2->SetBinContent(57,54366);
   lc_cut_stack_2->SetBinContent(58,50830);
   lc_cut_stack_2->SetBinContent(59,47702);
   lc_cut_stack_2->SetBinContent(60,44438);
   lc_cut_stack_2->SetBinContent(61,42024);
   lc_cut_stack_2->SetBinContent(62,40103);
   lc_cut_stack_2->SetBinContent(63,39848);
   lc_cut_stack_2->SetBinContent(64,37961);
   lc_cut_stack_2->SetBinContent(65,34680);
   lc_cut_stack_2->SetBinContent(66,34629);
   lc_cut_stack_2->SetBinContent(67,32164);
   lc_cut_stack_2->SetBinContent(68,28917);
   lc_cut_stack_2->SetBinContent(69,27183);
   lc_cut_stack_2->SetBinContent(70,26333);
   lc_cut_stack_2->SetBinContent(71,26112);
   lc_cut_stack_2->SetBinContent(72,24276);
   lc_cut_stack_2->SetBinContent(73,22746);
   lc_cut_stack_2->SetBinContent(74,21726);
   lc_cut_stack_2->SetBinContent(75,20893);
   lc_cut_stack_2->SetBinContent(76,19465);
   lc_cut_stack_2->SetBinContent(77,18547);
   lc_cut_stack_2->SetBinContent(78,17663);
   lc_cut_stack_2->SetBinContent(79,17306);
   lc_cut_stack_2->SetBinContent(80,15657);
   lc_cut_stack_2->SetBinContent(81,14552);
   lc_cut_stack_2->SetBinContent(82,14552);
   lc_cut_stack_2->SetBinContent(83,13192);
   lc_cut_stack_2->SetBinContent(84,13073);
   lc_cut_stack_2->SetBinContent(85,12512);
   lc_cut_stack_2->SetBinContent(86,11611);
   lc_cut_stack_2->SetBinContent(87,11186);
   lc_cut_stack_2->SetBinContent(88,10829);
   lc_cut_stack_2->SetBinContent(89,10234);
   lc_cut_stack_2->SetBinContent(90,9367);
   lc_cut_stack_2->SetBinContent(91,8942);
   lc_cut_stack_2->SetBinContent(92,8755);
   lc_cut_stack_2->SetBinContent(93,8262);
   lc_cut_stack_2->SetBinContent(94,7973);
   lc_cut_stack_2->SetBinContent(95,7463);
   lc_cut_stack_2->SetBinContent(96,6460);
   lc_cut_stack_2->SetBinContent(97,6562);
   lc_cut_stack_2->SetBinContent(98,6698);
   lc_cut_stack_2->SetBinContent(99,6086);
   lc_cut_stack_2->SetBinContent(100,6069);
   lc_cut_stack_2->SetBinContent(101,6324);
   lc_cut_stack_2->SetBinContent(102,4998);
   lc_cut_stack_2->SetBinContent(103,5083);
   lc_cut_stack_2->SetBinContent(104,5100);
   lc_cut_stack_2->SetBinContent(105,4879);
   lc_cut_stack_2->SetBinContent(106,4556);
   lc_cut_stack_2->SetBinContent(107,3961);
   lc_cut_stack_2->SetBinContent(108,4216);
   lc_cut_stack_2->SetBinContent(109,3706);
   lc_cut_stack_2->SetBinContent(110,3621);
   lc_cut_stack_2->SetBinContent(111,4029);
   lc_cut_stack_2->SetBinContent(112,3638);
   lc_cut_stack_2->SetBinContent(113,3094);
   lc_cut_stack_2->SetBinContent(114,3417);
   lc_cut_stack_2->SetBinContent(115,2890);
   lc_cut_stack_2->SetBinContent(116,2550);
   lc_cut_stack_2->SetBinContent(117,2567);
   lc_cut_stack_2->SetBinContent(118,2839);
   lc_cut_stack_2->SetBinContent(119,2601);
   lc_cut_stack_2->SetBinContent(120,2431);
   lc_cut_stack_2->SetBinContent(121,2380);
   lc_cut_stack_2->SetBinContent(122,2244);
   lc_cut_stack_2->SetBinContent(123,2227);
   lc_cut_stack_2->SetBinContent(124,2074);
   lc_cut_stack_2->SetBinContent(125,2040);
   lc_cut_stack_2->SetBinContent(126,2210);
   lc_cut_stack_2->SetBinContent(127,1598);
   lc_cut_stack_2->SetBinContent(128,1615);
   lc_cut_stack_2->SetBinContent(129,2108);
   lc_cut_stack_2->SetBinContent(130,1666);
   lc_cut_stack_2->SetBinContent(131,1717);
   lc_cut_stack_2->SetBinContent(132,1530);
   lc_cut_stack_2->SetBinContent(133,1411);
   lc_cut_stack_2->SetBinContent(134,1598);
   lc_cut_stack_2->SetBinContent(135,1785);
   lc_cut_stack_2->SetBinContent(136,1479);
   lc_cut_stack_2->SetBinContent(137,1615);
   lc_cut_stack_2->SetBinContent(138,1360);
   lc_cut_stack_2->SetBinContent(139,1258);
   lc_cut_stack_2->SetBinContent(140,1275);
   lc_cut_stack_2->SetBinContent(141,1173);
   lc_cut_stack_2->SetBinContent(142,1275);
   lc_cut_stack_2->SetBinContent(143,1224);
   lc_cut_stack_2->SetBinContent(144,1156);
   lc_cut_stack_2->SetBinContent(145,1054);
   lc_cut_stack_2->SetBinContent(146,1241);
   lc_cut_stack_2->SetBinContent(147,1598);
   lc_cut_stack_2->SetBinContent(148,1190);
   lc_cut_stack_2->SetBinContent(149,1020);
   lc_cut_stack_2->SetBinContent(150,935);
   lc_cut_stack_2->SetBinContent(151,918);
   lc_cut_stack_2->SetBinContent(152,884);
   lc_cut_stack_2->SetBinContent(153,1105);
   lc_cut_stack_2->SetBinContent(154,884);
   lc_cut_stack_2->SetBinContent(155,680);
   lc_cut_stack_2->SetBinContent(156,901);
   lc_cut_stack_2->SetBinContent(157,952);
   lc_cut_stack_2->SetBinContent(158,578);
   lc_cut_stack_2->SetBinContent(159,714);
   lc_cut_stack_2->SetBinContent(160,765);
   lc_cut_stack_2->SetBinContent(161,833);
   lc_cut_stack_2->SetBinContent(162,1020);
   lc_cut_stack_2->SetBinContent(163,663);
   lc_cut_stack_2->SetBinContent(164,629);
   lc_cut_stack_2->SetBinContent(165,663);
   lc_cut_stack_2->SetBinContent(166,561);
   lc_cut_stack_2->SetBinContent(167,646);
   lc_cut_stack_2->SetBinContent(168,629);
   lc_cut_stack_2->SetBinContent(169,663);
   lc_cut_stack_2->SetBinContent(170,629);
   lc_cut_stack_2->SetBinContent(171,646);
   lc_cut_stack_2->SetBinContent(172,459);
   lc_cut_stack_2->SetBinContent(173,578);
   lc_cut_stack_2->SetBinContent(174,408);
   lc_cut_stack_2->SetBinContent(175,527);
   lc_cut_stack_2->SetBinContent(176,561);
   lc_cut_stack_2->SetBinContent(177,442);
   lc_cut_stack_2->SetBinContent(178,442);
   lc_cut_stack_2->SetBinContent(179,425);
   lc_cut_stack_2->SetBinContent(180,476);
   lc_cut_stack_2->SetBinContent(181,459);
   lc_cut_stack_2->SetBinContent(182,340);
   lc_cut_stack_2->SetBinContent(183,493);
   lc_cut_stack_2->SetBinContent(184,357);
   lc_cut_stack_2->SetBinContent(185,442);
   lc_cut_stack_2->SetBinContent(186,374);
   lc_cut_stack_2->SetBinContent(187,272);
   lc_cut_stack_2->SetBinContent(188,374);
   lc_cut_stack_2->SetBinContent(189,221);
   lc_cut_stack_2->SetBinContent(190,272);
   lc_cut_stack_2->SetBinContent(191,340);
   lc_cut_stack_2->SetBinContent(192,255);
   lc_cut_stack_2->SetBinContent(193,187);
   lc_cut_stack_2->SetBinContent(194,119);
   lc_cut_stack_2->SetBinContent(195,187);
   lc_cut_stack_2->SetBinContent(196,187);
   lc_cut_stack_2->SetBinContent(197,204);
   lc_cut_stack_2->SetBinContent(198,119);
   lc_cut_stack_2->SetBinContent(199,119);
   lc_cut_stack_2->SetBinContent(200,153);
   lc_cut_stack_2->SetBinContent(201,850);
   lc_cut_stack_2->SetBinError(12,34);
   lc_cut_stack_2->SetBinError(13,74.10128);
   lc_cut_stack_2->SetBinError(14,166.5653);
   lc_cut_stack_2->SetBinError(15,297.8641);
   lc_cut_stack_2->SetBinError(16,514.7941);
   lc_cut_stack_2->SetBinError(17,791.1852);
   lc_cut_stack_2->SetBinError(18,1069.92);
   lc_cut_stack_2->SetBinError(19,1326.98);
   lc_cut_stack_2->SetBinError(20,1588.113);
   lc_cut_stack_2->SetBinError(21,1791.222);
   lc_cut_stack_2->SetBinError(22,1979.022);
   lc_cut_stack_2->SetBinError(23,2112.588);
   lc_cut_stack_2->SetBinError(24,2177.46);
   lc_cut_stack_2->SetBinError(25,2201.943);
   lc_cut_stack_2->SetBinError(26,2190.759);
   lc_cut_stack_2->SetBinError(27,2160.071);
   lc_cut_stack_2->SetBinError(28,2122.074);
   lc_cut_stack_2->SetBinError(29,2077.968);
   lc_cut_stack_2->SetBinError(30,2046.083);
   lc_cut_stack_2->SetBinError(31,2001.457);
   lc_cut_stack_2->SetBinError(32,1943.064);
   lc_cut_stack_2->SetBinError(33,1899.213);
   lc_cut_stack_2->SetBinError(34,1865.358);
   lc_cut_stack_2->SetBinError(35,1808.803);
   lc_cut_stack_2->SetBinError(36,1745.131);
   lc_cut_stack_2->SetBinError(37,1700.51);
   lc_cut_stack_2->SetBinError(38,1654.337);
   lc_cut_stack_2->SetBinError(39,1603.056);
   lc_cut_stack_2->SetBinError(40,1562.244);
   lc_cut_stack_2->SetBinError(41,1515.767);
   lc_cut_stack_2->SetBinError(42,1465.455);
   lc_cut_stack_2->SetBinError(43,1419.678);
   lc_cut_stack_2->SetBinError(44,1383.909);
   lc_cut_stack_2->SetBinError(45,1339.013);
   lc_cut_stack_2->SetBinError(46,1305.795);
   lc_cut_stack_2->SetBinError(47,1281.556);
   lc_cut_stack_2->SetBinError(48,1231.532);
   lc_cut_stack_2->SetBinError(49,1200.879);
   lc_cut_stack_2->SetBinError(50,1171.274);
   lc_cut_stack_2->SetBinError(51,1125.857);
   lc_cut_stack_2->SetBinError(52,1108.395);
   lc_cut_stack_2->SetBinError(53,1069.109);
   lc_cut_stack_2->SetBinError(54,1039.922);
   lc_cut_stack_2->SetBinError(55,1005.877);
   lc_cut_stack_2->SetBinError(56,986.2931);
   lc_cut_stack_2->SetBinError(57,961.3647);
   lc_cut_stack_2->SetBinError(58,929.5752);
   lc_cut_stack_2->SetBinError(59,900.5187);
   lc_cut_stack_2->SetBinError(60,869.164);
   lc_cut_stack_2->SetBinError(61,845.2266);
   lc_cut_stack_2->SetBinError(62,825.6821);
   lc_cut_stack_2->SetBinError(63,823.0529);
   lc_cut_stack_2->SetBinError(64,803.3287);
   lc_cut_stack_2->SetBinError(65,767.8281);
   lc_cut_stack_2->SetBinError(66,767.2633);
   lc_cut_stack_2->SetBinError(67,739.4511);
   lc_cut_stack_2->SetBinError(68,701.1341);
   lc_cut_stack_2->SetBinError(69,679.7875);
   lc_cut_stack_2->SetBinError(70,669.0747);
   lc_cut_stack_2->SetBinError(71,666.2612);
   lc_cut_stack_2->SetBinError(72,642.4111);
   lc_cut_stack_2->SetBinError(73,621.8376);
   lc_cut_stack_2->SetBinError(74,607.7351);
   lc_cut_stack_2->SetBinError(75,595.9706);
   lc_cut_stack_2->SetBinError(76,575.2434);
   lc_cut_stack_2->SetBinError(77,561.5149);
   lc_cut_stack_2->SetBinError(78,547.9699);
   lc_cut_stack_2->SetBinError(79,542.4039);
   lc_cut_stack_2->SetBinError(80,515.9157);
   lc_cut_stack_2->SetBinError(81,497.3771);
   lc_cut_stack_2->SetBinError(82,497.3771);
   lc_cut_stack_2->SetBinError(83,473.5652);
   lc_cut_stack_2->SetBinError(84,471.4244);
   lc_cut_stack_2->SetBinError(85,461.1984);
   lc_cut_stack_2->SetBinError(86,444.2826);
   lc_cut_stack_2->SetBinError(87,436.0757);
   lc_cut_stack_2->SetBinError(88,429.0606);
   lc_cut_stack_2->SetBinError(89,417.1067);
   lc_cut_stack_2->SetBinError(90,399.0476);
   lc_cut_stack_2->SetBinError(91,389.8897);
   lc_cut_stack_2->SetBinError(92,385.7914);
   lc_cut_stack_2->SetBinError(93,374.7719);
   lc_cut_stack_2->SetBinError(94,368.1589);
   lc_cut_stack_2->SetBinError(95,356.1896);
   lc_cut_stack_2->SetBinError(96,331.391);
   lc_cut_stack_2->SetBinError(97,333.997);
   lc_cut_stack_2->SetBinError(98,337.4404);
   lc_cut_stack_2->SetBinError(99,321.6551);
   lc_cut_stack_2->SetBinError(100,321.2055);
   lc_cut_stack_2->SetBinError(101,327.8841);
   lc_cut_stack_2->SetBinError(102,291.4893);
   lc_cut_stack_2->SetBinError(103,293.9575);
   lc_cut_stack_2->SetBinError(104,294.4486);
   lc_cut_stack_2->SetBinError(105,287.9983);
   lc_cut_stack_2->SetBinError(106,278.302);
   lc_cut_stack_2->SetBinError(107,259.4937);
   lc_cut_stack_2->SetBinError(108,267.7163);
   lc_cut_stack_2->SetBinError(109,251.002);
   lc_cut_stack_2->SetBinError(110,248.1068);
   lc_cut_stack_2->SetBinError(111,261.7117);
   lc_cut_stack_2->SetBinError(112,248.6886);
   lc_cut_stack_2->SetBinError(113,229.3425);
   lc_cut_stack_2->SetBinError(114,241.0166);
   lc_cut_stack_2->SetBinError(115,221.6529);
   lc_cut_stack_2->SetBinError(116,208.2066);
   lc_cut_stack_2->SetBinError(117,208.8995);
   lc_cut_stack_2->SetBinError(118,219.6884);
   lc_cut_stack_2->SetBinError(119,210.2784);
   lc_cut_stack_2->SetBinError(120,203.2904);
   lc_cut_stack_2->SetBinError(121,201.1467);
   lc_cut_stack_2->SetBinError(122,195.3151);
   lc_cut_stack_2->SetBinError(123,194.5739);
   lc_cut_stack_2->SetBinError(124,187.7711);
   lc_cut_stack_2->SetBinError(125,186.2257);
   lc_cut_stack_2->SetBinError(126,193.8298);
   lc_cut_stack_2->SetBinError(127,164.8211);
   lc_cut_stack_2->SetBinError(128,165.6955);
   lc_cut_stack_2->SetBinError(129,189.304);
   lc_cut_stack_2->SetBinError(130,168.2914);
   lc_cut_stack_2->SetBinError(131,170.8479);
   lc_cut_stack_2->SetBinError(132,161.2762);
   lc_cut_stack_2->SetBinError(133,154.8774);
   lc_cut_stack_2->SetBinError(134,164.8211);
   lc_cut_stack_2->SetBinError(135,174.1982);
   lc_cut_stack_2->SetBinError(136,158.5654);
   lc_cut_stack_2->SetBinError(137,165.6955);
   lc_cut_stack_2->SetBinError(138,152.0526);
   lc_cut_stack_2->SetBinError(139,146.2395);
   lc_cut_stack_2->SetBinError(140,147.2243);
   lc_cut_stack_2->SetBinError(141,141.2126);
   lc_cut_stack_2->SetBinError(142,147.2243);
   lc_cut_stack_2->SetBinError(143,144.2498);
   lc_cut_stack_2->SetBinError(144,140.1856);
   lc_cut_stack_2->SetBinError(145,133.8581);
   lc_cut_stack_2->SetBinError(146,145.2481);
   lc_cut_stack_2->SetBinError(147,164.8211);
   lc_cut_stack_2->SetBinError(148,142.2322);
   lc_cut_stack_2->SetBinError(149,131.6814);
   lc_cut_stack_2->SetBinError(150,126.0754);
   lc_cut_stack_2->SetBinError(151,124.924);
   lc_cut_stack_2->SetBinError(152,122.5887);
   lc_cut_stack_2->SetBinError(153,137.0584);
   lc_cut_stack_2->SetBinError(154,122.5887);
   lc_cut_stack_2->SetBinError(155,107.5174);
   lc_cut_stack_2->SetBinError(156,123.7619);
   lc_cut_stack_2->SetBinError(157,127.2164);
   lc_cut_stack_2->SetBinError(158,99.12618);
   lc_cut_stack_2->SetBinError(159,110.1726);
   lc_cut_stack_2->SetBinError(160,114.0395);
   lc_cut_stack_2->SetBinError(161,119);
   lc_cut_stack_2->SetBinError(162,131.6814);
   lc_cut_stack_2->SetBinError(163,106.165);
   lc_cut_stack_2->SetBinError(164,103.407);
   lc_cut_stack_2->SetBinError(165,106.165);
   lc_cut_stack_2->SetBinError(166,97.65756);
   lc_cut_stack_2->SetBinError(167,104.795);
   lc_cut_stack_2->SetBinError(168,103.407);
   lc_cut_stack_2->SetBinError(169,106.165);
   lc_cut_stack_2->SetBinError(170,103.407);
   lc_cut_stack_2->SetBinError(171,104.795);
   lc_cut_stack_2->SetBinError(172,88.33459);
   lc_cut_stack_2->SetBinError(173,99.12618);
   lc_cut_stack_2->SetBinError(174,83.28265);
   lc_cut_stack_2->SetBinError(175,94.65199);
   lc_cut_stack_2->SetBinError(176,97.65756);
   lc_cut_stack_2->SetBinError(177,86.68333);
   lc_cut_stack_2->SetBinError(178,86.68333);
   lc_cut_stack_2->SetBinError(179,85);
   lc_cut_stack_2->SetBinError(180,89.95554);
   lc_cut_stack_2->SetBinError(181,88.33459);
   lc_cut_stack_2->SetBinError(182,76.02631);
   lc_cut_stack_2->SetBinError(183,91.5478);
   lc_cut_stack_2->SetBinError(184,77.90379);
   lc_cut_stack_2->SetBinError(185,86.68333);
   lc_cut_stack_2->SetBinError(186,79.73707);
   lc_cut_stack_2->SetBinError(187,68);
   lc_cut_stack_2->SetBinError(188,79.73707);
   lc_cut_stack_2->SetBinError(189,61.29437);
   lc_cut_stack_2->SetBinError(190,68);
   lc_cut_stack_2->SetBinError(191,76.02631);
   lc_cut_stack_2->SetBinError(192,65.84072);
   lc_cut_stack_2->SetBinError(193,56.38262);
   lc_cut_stack_2->SetBinError(194,44.97777);
   lc_cut_stack_2->SetBinError(195,56.38262);
   lc_cut_stack_2->SetBinError(196,56.38262);
   lc_cut_stack_2->SetBinError(197,58.88973);
   lc_cut_stack_2->SetBinError(198,44.97777);
   lc_cut_stack_2->SetBinError(199,44.97777);
   lc_cut_stack_2->SetBinError(200,51);
   lc_cut_stack_2->SetBinError(201,120.2082);
   lc_cut_stack_2->SetEntries(432528);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries = 432528 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.9816");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.5141");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   lc_cut_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(lc_cut_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   lc_cut_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   lc_cut_stack_2->SetLineColor(ci);
   lc_cut_stack_2->GetXaxis()->SetLabelFont(42);
   lc_cut_stack_2->GetXaxis()->SetTitleOffset(1);
   lc_cut_stack_2->GetXaxis()->SetTitleFont(42);
   lc_cut_stack_2->GetYaxis()->SetLabelFont(42);
   lc_cut_stack_2->GetYaxis()->SetTitleFont(42);
   lc_cut_stack_2->GetZaxis()->SetLabelFont(42);
   lc_cut_stack_2->GetZaxis()->SetTitleOffset(1);
   lc_cut_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(lc_cut_stack_2,"sames histo");
   hs->Draw("hist nostack");
   TText *text = new TText(0.15,0.04,"Light blue is scaled by 17");
   text->SetNDC();

   ci = TColor::GetColor("#0c5da5");
   text->SetTextColor(ci);
   text->SetTextSize(0.04);
   text->Draw();
   TLine *line = new TLine(1,0,1,442560);
   line->SetLineColor(98);
   line->SetLineStyle(9);
   line->SetLineWidth(2);
   line->Draw();
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.530097e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.716");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.047");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries = 432528 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.9816");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.5141");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
