#ifdef __CLING__
#pragma cling optimize(0)
#endif
void theta_e()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Sep 16 14:45:56 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-5.526316,-136693.5,40.52632,1002419);
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
   hs->SetMaximum(865725.6);
   
   TH1F *hs_stack_3 = new TH1F("hs_stack_3","",200,0,35);
   hs_stack_3->SetMinimum(0);
   hs_stack_3->SetMaximum(865725.6);
   hs_stack_3->SetDirectory(nullptr);
   hs_stack_3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hs_stack_3->SetLineColor(ci);
   hs_stack_3->SetLineWidth(0);
   hs_stack_3->GetXaxis()->SetTitle("#theta_{e} [Deg.]");
   hs_stack_3->GetXaxis()->SetLabelFont(42);
   hs_stack_3->GetXaxis()->SetTitleSize(0.05);
   hs_stack_3->GetXaxis()->SetTitleOffset(1);
   hs_stack_3->GetXaxis()->SetTitleFont(42);
   hs_stack_3->GetYaxis()->SetLabelFont(42);
   hs_stack_3->GetYaxis()->SetTitleFont(42);
   hs_stack_3->GetZaxis()->SetLabelFont(42);
   hs_stack_3->GetZaxis()->SetTitleOffset(1);
   hs_stack_3->GetZaxis()->SetTitleFont(42);
   hs->SetHistogram(hs_stack_3);
   
   
   TH1F *theta_e_stack_1 = new TH1F("theta_e_stack_1","",200,0,35);
   theta_e_stack_1->SetBinContent(3,2);
   theta_e_stack_1->SetBinContent(4,1);
   theta_e_stack_1->SetBinContent(5,2);
   theta_e_stack_1->SetBinContent(6,7);
   theta_e_stack_1->SetBinContent(7,4);
   theta_e_stack_1->SetBinContent(8,7);
   theta_e_stack_1->SetBinContent(9,12);
   theta_e_stack_1->SetBinContent(10,22);
   theta_e_stack_1->SetBinContent(11,19);
   theta_e_stack_1->SetBinContent(12,27);
   theta_e_stack_1->SetBinContent(13,31);
   theta_e_stack_1->SetBinContent(14,43);
   theta_e_stack_1->SetBinContent(15,66);
   theta_e_stack_1->SetBinContent(16,81);
   theta_e_stack_1->SetBinContent(17,117);
   theta_e_stack_1->SetBinContent(18,171);
   theta_e_stack_1->SetBinContent(19,233);
   theta_e_stack_1->SetBinContent(20,345);
   theta_e_stack_1->SetBinContent(21,433);
   theta_e_stack_1->SetBinContent(22,674);
   theta_e_stack_1->SetBinContent(23,1070);
   theta_e_stack_1->SetBinContent(24,1660);
   theta_e_stack_1->SetBinContent(25,2675);
   theta_e_stack_1->SetBinContent(26,4425);
   theta_e_stack_1->SetBinContent(27,7302);
   theta_e_stack_1->SetBinContent(28,11933);
   theta_e_stack_1->SetBinContent(29,21445);
   theta_e_stack_1->SetBinContent(30,57332);
   theta_e_stack_1->SetBinContent(31,264464);
   theta_e_stack_1->SetBinContent(32,605934);
   theta_e_stack_1->SetBinContent(33,595989);
   theta_e_stack_1->SetBinContent(34,547120);
   theta_e_stack_1->SetBinContent(35,720207);
   theta_e_stack_1->SetBinContent(36,721438);
   theta_e_stack_1->SetBinContent(37,703571);
   theta_e_stack_1->SetBinContent(38,676251);
   theta_e_stack_1->SetBinContent(39,655349);
   theta_e_stack_1->SetBinContent(40,631273);
   theta_e_stack_1->SetBinContent(41,610479);
   theta_e_stack_1->SetBinContent(42,596103);
   theta_e_stack_1->SetBinContent(43,564473);
   theta_e_stack_1->SetBinContent(44,540651);
   theta_e_stack_1->SetBinContent(45,524562);
   theta_e_stack_1->SetBinContent(46,505983);
   theta_e_stack_1->SetBinContent(47,481471);
   theta_e_stack_1->SetBinContent(48,462088);
   theta_e_stack_1->SetBinContent(49,444293);
   theta_e_stack_1->SetBinContent(50,425348);
   theta_e_stack_1->SetBinContent(51,410220);
   theta_e_stack_1->SetBinContent(52,391470);
   theta_e_stack_1->SetBinContent(53,377572);
   theta_e_stack_1->SetBinContent(54,359967);
   theta_e_stack_1->SetBinContent(55,345909);
   theta_e_stack_1->SetBinContent(56,334432);
   theta_e_stack_1->SetBinContent(57,321015);
   theta_e_stack_1->SetBinContent(58,310471);
   theta_e_stack_1->SetBinContent(59,296489);
   theta_e_stack_1->SetBinContent(60,287021);
   theta_e_stack_1->SetBinContent(61,274697);
   theta_e_stack_1->SetBinContent(62,264805);
   theta_e_stack_1->SetBinContent(63,255567);
   theta_e_stack_1->SetBinContent(64,245694);
   theta_e_stack_1->SetBinContent(65,237314);
   theta_e_stack_1->SetBinContent(66,225920);
   theta_e_stack_1->SetBinContent(67,218103);
   theta_e_stack_1->SetBinContent(68,209354);
   theta_e_stack_1->SetBinContent(69,201389);
   theta_e_stack_1->SetBinContent(70,193141);
   theta_e_stack_1->SetBinContent(71,186014);
   theta_e_stack_1->SetBinContent(72,180470);
   theta_e_stack_1->SetBinContent(73,172253);
   theta_e_stack_1->SetBinContent(74,166885);
   theta_e_stack_1->SetBinContent(75,160190);
   theta_e_stack_1->SetBinContent(76,155601);
   theta_e_stack_1->SetBinContent(77,150005);
   theta_e_stack_1->SetBinContent(78,145243);
   theta_e_stack_1->SetBinContent(79,140522);
   theta_e_stack_1->SetBinContent(80,134688);
   theta_e_stack_1->SetBinContent(81,129964);
   theta_e_stack_1->SetBinContent(82,125703);
   theta_e_stack_1->SetBinContent(83,122096);
   theta_e_stack_1->SetBinContent(84,117246);
   theta_e_stack_1->SetBinContent(85,112449);
   theta_e_stack_1->SetBinContent(86,108725);
   theta_e_stack_1->SetBinContent(87,105418);
   theta_e_stack_1->SetBinContent(88,101415);
   theta_e_stack_1->SetBinContent(89,98908);
   theta_e_stack_1->SetBinContent(90,95426);
   theta_e_stack_1->SetBinContent(91,91607);
   theta_e_stack_1->SetBinContent(92,88808);
   theta_e_stack_1->SetBinContent(93,85464);
   theta_e_stack_1->SetBinContent(94,82151);
   theta_e_stack_1->SetBinContent(95,79938);
   theta_e_stack_1->SetBinContent(96,77070);
   theta_e_stack_1->SetBinContent(97,74564);
   theta_e_stack_1->SetBinContent(98,72175);
   theta_e_stack_1->SetBinContent(99,69664);
   theta_e_stack_1->SetBinContent(100,67696);
   theta_e_stack_1->SetBinContent(101,65083);
   theta_e_stack_1->SetBinContent(102,63372);
   theta_e_stack_1->SetBinContent(103,61125);
   theta_e_stack_1->SetBinContent(104,59676);
   theta_e_stack_1->SetBinContent(105,57344);
   theta_e_stack_1->SetBinContent(106,55150);
   theta_e_stack_1->SetBinContent(107,53631);
   theta_e_stack_1->SetBinContent(108,52167);
   theta_e_stack_1->SetBinContent(109,50139);
   theta_e_stack_1->SetBinContent(110,48479);
   theta_e_stack_1->SetBinContent(111,46853);
   theta_e_stack_1->SetBinContent(112,45696);
   theta_e_stack_1->SetBinContent(113,43416);
   theta_e_stack_1->SetBinContent(114,42749);
   theta_e_stack_1->SetBinContent(115,40799);
   theta_e_stack_1->SetBinContent(116,39574);
   theta_e_stack_1->SetBinContent(117,38724);
   theta_e_stack_1->SetBinContent(118,38052);
   theta_e_stack_1->SetBinContent(119,36331);
   theta_e_stack_1->SetBinContent(120,35410);
   theta_e_stack_1->SetBinContent(121,33839);
   theta_e_stack_1->SetBinContent(122,33489);
   theta_e_stack_1->SetBinContent(123,32008);
   theta_e_stack_1->SetBinContent(124,31467);
   theta_e_stack_1->SetBinContent(125,30315);
   theta_e_stack_1->SetBinContent(126,29516);
   theta_e_stack_1->SetBinContent(127,28583);
   theta_e_stack_1->SetBinContent(128,27554);
   theta_e_stack_1->SetBinContent(129,26984);
   theta_e_stack_1->SetBinContent(130,26431);
   theta_e_stack_1->SetBinContent(131,25575);
   theta_e_stack_1->SetBinContent(132,24775);
   theta_e_stack_1->SetBinContent(133,24223);
   theta_e_stack_1->SetBinContent(134,23390);
   theta_e_stack_1->SetBinContent(135,22561);
   theta_e_stack_1->SetBinContent(136,21778);
   theta_e_stack_1->SetBinContent(137,20964);
   theta_e_stack_1->SetBinContent(138,20412);
   theta_e_stack_1->SetBinContent(139,19481);
   theta_e_stack_1->SetBinContent(140,19151);
   theta_e_stack_1->SetBinContent(141,18624);
   theta_e_stack_1->SetBinContent(142,17568);
   theta_e_stack_1->SetBinContent(143,17033);
   theta_e_stack_1->SetBinContent(144,16578);
   theta_e_stack_1->SetBinContent(145,15772);
   theta_e_stack_1->SetBinContent(146,15622);
   theta_e_stack_1->SetBinContent(147,14679);
   theta_e_stack_1->SetBinContent(148,14417);
   theta_e_stack_1->SetBinContent(149,13848);
   theta_e_stack_1->SetBinContent(150,13096);
   theta_e_stack_1->SetBinContent(151,12711);
   theta_e_stack_1->SetBinContent(152,12234);
   theta_e_stack_1->SetBinContent(153,11370);
   theta_e_stack_1->SetBinContent(154,11088);
   theta_e_stack_1->SetBinContent(155,10537);
   theta_e_stack_1->SetBinContent(156,10127);
   theta_e_stack_1->SetBinContent(157,9730);
   theta_e_stack_1->SetBinContent(158,9190);
   theta_e_stack_1->SetBinContent(159,8739);
   theta_e_stack_1->SetBinContent(160,8078);
   theta_e_stack_1->SetBinContent(161,8034);
   theta_e_stack_1->SetBinContent(162,7483);
   theta_e_stack_1->SetBinContent(163,7188);
   theta_e_stack_1->SetBinContent(164,6819);
   theta_e_stack_1->SetBinContent(165,6475);
   theta_e_stack_1->SetBinContent(166,6242);
   theta_e_stack_1->SetBinContent(167,5883);
   theta_e_stack_1->SetBinContent(168,5593);
   theta_e_stack_1->SetBinContent(169,5514);
   theta_e_stack_1->SetBinContent(170,5161);
   theta_e_stack_1->SetBinContent(171,4893);
   theta_e_stack_1->SetBinContent(172,4663);
   theta_e_stack_1->SetBinContent(173,4494);
   theta_e_stack_1->SetBinContent(174,4499);
   theta_e_stack_1->SetBinContent(175,4278);
   theta_e_stack_1->SetBinContent(176,4190);
   theta_e_stack_1->SetBinContent(177,4084);
   theta_e_stack_1->SetBinContent(178,4048);
   theta_e_stack_1->SetBinContent(179,3851);
   theta_e_stack_1->SetBinContent(180,3738);
   theta_e_stack_1->SetBinContent(181,3539);
   theta_e_stack_1->SetBinContent(182,3490);
   theta_e_stack_1->SetBinContent(183,3453);
   theta_e_stack_1->SetBinContent(184,3365);
   theta_e_stack_1->SetBinContent(185,3365);
   theta_e_stack_1->SetBinContent(186,3269);
   theta_e_stack_1->SetBinContent(187,3094);
   theta_e_stack_1->SetBinContent(188,3016);
   theta_e_stack_1->SetBinContent(189,2821);
   theta_e_stack_1->SetBinContent(190,2812);
   theta_e_stack_1->SetBinContent(191,2670);
   theta_e_stack_1->SetBinContent(192,2679);
   theta_e_stack_1->SetBinContent(193,2467);
   theta_e_stack_1->SetBinContent(194,2304);
   theta_e_stack_1->SetBinContent(195,2218);
   theta_e_stack_1->SetBinContent(196,2022);
   theta_e_stack_1->SetBinContent(197,1862);
   theta_e_stack_1->SetBinContent(198,1774);
   theta_e_stack_1->SetBinContent(199,1706);
   theta_e_stack_1->SetBinContent(200,1634);
   theta_e_stack_1->SetBinContent(201,21622);
   theta_e_stack_1->SetEntries(2.258571e+07);
   theta_e_stack_1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.258571e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  10.21");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   4.71");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   theta_e_stack_1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(theta_e_stack_1);

   ci = TColor::GetColor("#121415");
   theta_e_stack_1->SetLineColor(ci);
   theta_e_stack_1->GetXaxis()->SetLabelFont(42);
   theta_e_stack_1->GetXaxis()->SetTitleOffset(1);
   theta_e_stack_1->GetXaxis()->SetTitleFont(42);
   theta_e_stack_1->GetYaxis()->SetLabelFont(42);
   theta_e_stack_1->GetYaxis()->SetTitleFont(42);
   theta_e_stack_1->GetZaxis()->SetLabelFont(42);
   theta_e_stack_1->GetZaxis()->SetTitleOffset(1);
   theta_e_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(theta_e_stack_1,"sames histo");
   
   TH1F *theta_e_stack_2 = new TH1F("theta_e_stack_2","",200,0,35);
   theta_e_stack_2->SetBinContent(5,1);
   theta_e_stack_2->SetBinContent(6,3);
   theta_e_stack_2->SetBinContent(9,3);
   theta_e_stack_2->SetBinContent(10,4);
   theta_e_stack_2->SetBinContent(11,5);
   theta_e_stack_2->SetBinContent(12,9);
   theta_e_stack_2->SetBinContent(13,5);
   theta_e_stack_2->SetBinContent(14,17);
   theta_e_stack_2->SetBinContent(15,13);
   theta_e_stack_2->SetBinContent(16,19);
   theta_e_stack_2->SetBinContent(17,18);
   theta_e_stack_2->SetBinContent(18,34);
   theta_e_stack_2->SetBinContent(19,60);
   theta_e_stack_2->SetBinContent(20,104);
   theta_e_stack_2->SetBinContent(21,101);
   theta_e_stack_2->SetBinContent(22,154);
   theta_e_stack_2->SetBinContent(23,240);
   theta_e_stack_2->SetBinContent(24,362);
   theta_e_stack_2->SetBinContent(25,540);
   theta_e_stack_2->SetBinContent(26,859);
   theta_e_stack_2->SetBinContent(27,1484);
   theta_e_stack_2->SetBinContent(28,2585);
   theta_e_stack_2->SetBinContent(29,4841);
   theta_e_stack_2->SetBinContent(30,13690);
   theta_e_stack_2->SetBinContent(31,172097);
   theta_e_stack_2->SetBinContent(32,508282);
   theta_e_stack_2->SetBinContent(33,498708);
   theta_e_stack_2->SetBinContent(34,449084);
   theta_e_stack_2->SetBinContent(35,622195);
   theta_e_stack_2->SetBinContent(36,627552);
   theta_e_stack_2->SetBinContent(37,616621);
   theta_e_stack_2->SetBinContent(38,590968);
   theta_e_stack_2->SetBinContent(39,572928);
   theta_e_stack_2->SetBinContent(40,552937);
   theta_e_stack_2->SetBinContent(41,535422);
   theta_e_stack_2->SetBinContent(42,525235);
   theta_e_stack_2->SetBinContent(43,497800);
   theta_e_stack_2->SetBinContent(44,477576);
   theta_e_stack_2->SetBinContent(45,464201);
   theta_e_stack_2->SetBinContent(46,449532);
   theta_e_stack_2->SetBinContent(47,428628);
   theta_e_stack_2->SetBinContent(48,411748);
   theta_e_stack_2->SetBinContent(49,396669);
   theta_e_stack_2->SetBinContent(50,380471);
   theta_e_stack_2->SetBinContent(51,368162);
   theta_e_stack_2->SetBinContent(52,351161);
   theta_e_stack_2->SetBinContent(53,339891);
   theta_e_stack_2->SetBinContent(54,324190);
   theta_e_stack_2->SetBinContent(55,312562);
   theta_e_stack_2->SetBinContent(56,302929);
   theta_e_stack_2->SetBinContent(57,291124);
   theta_e_stack_2->SetBinContent(58,281836);
   theta_e_stack_2->SetBinContent(59,269225);
   theta_e_stack_2->SetBinContent(60,261279);
   theta_e_stack_2->SetBinContent(61,250129);
   theta_e_stack_2->SetBinContent(62,241500);
   theta_e_stack_2->SetBinContent(63,233355);
   theta_e_stack_2->SetBinContent(64,224221);
   theta_e_stack_2->SetBinContent(65,216780);
   theta_e_stack_2->SetBinContent(66,206284);
   theta_e_stack_2->SetBinContent(67,199613);
   theta_e_stack_2->SetBinContent(68,191516);
   theta_e_stack_2->SetBinContent(69,184346);
   theta_e_stack_2->SetBinContent(70,176870);
   theta_e_stack_2->SetBinContent(71,170382);
   theta_e_stack_2->SetBinContent(72,165683);
   theta_e_stack_2->SetBinContent(73,158341);
   theta_e_stack_2->SetBinContent(74,153530);
   theta_e_stack_2->SetBinContent(75,147341);
   theta_e_stack_2->SetBinContent(76,143287);
   theta_e_stack_2->SetBinContent(77,138094);
   theta_e_stack_2->SetBinContent(78,133623);
   theta_e_stack_2->SetBinContent(79,129559);
   theta_e_stack_2->SetBinContent(80,124094);
   theta_e_stack_2->SetBinContent(81,119850);
   theta_e_stack_2->SetBinContent(82,116067);
   theta_e_stack_2->SetBinContent(83,112941);
   theta_e_stack_2->SetBinContent(84,108467);
   theta_e_stack_2->SetBinContent(85,104038);
   theta_e_stack_2->SetBinContent(86,100590);
   theta_e_stack_2->SetBinContent(87,97577);
   theta_e_stack_2->SetBinContent(88,93865);
   theta_e_stack_2->SetBinContent(89,91472);
   theta_e_stack_2->SetBinContent(90,88336);
   theta_e_stack_2->SetBinContent(91,84981);
   theta_e_stack_2->SetBinContent(92,82248);
   theta_e_stack_2->SetBinContent(93,79190);
   theta_e_stack_2->SetBinContent(94,76190);
   theta_e_stack_2->SetBinContent(95,74216);
   theta_e_stack_2->SetBinContent(96,71460);
   theta_e_stack_2->SetBinContent(97,69265);
   theta_e_stack_2->SetBinContent(98,67114);
   theta_e_stack_2->SetBinContent(99,64624);
   theta_e_stack_2->SetBinContent(100,62964);
   theta_e_stack_2->SetBinContent(101,60257);
   theta_e_stack_2->SetBinContent(102,58889);
   theta_e_stack_2->SetBinContent(103,56814);
   theta_e_stack_2->SetBinContent(104,55488);
   theta_e_stack_2->SetBinContent(105,53399);
   theta_e_stack_2->SetBinContent(106,51363);
   theta_e_stack_2->SetBinContent(107,49954);
   theta_e_stack_2->SetBinContent(108,48657);
   theta_e_stack_2->SetBinContent(109,46671);
   theta_e_stack_2->SetBinContent(110,45229);
   theta_e_stack_2->SetBinContent(111,43780);
   theta_e_stack_2->SetBinContent(112,42682);
   theta_e_stack_2->SetBinContent(113,40592);
   theta_e_stack_2->SetBinContent(114,40026);
   theta_e_stack_2->SetBinContent(115,38249);
   theta_e_stack_2->SetBinContent(116,37190);
   theta_e_stack_2->SetBinContent(117,36321);
   theta_e_stack_2->SetBinContent(118,35771);
   theta_e_stack_2->SetBinContent(119,34247);
   theta_e_stack_2->SetBinContent(120,33328);
   theta_e_stack_2->SetBinContent(121,31957);
   theta_e_stack_2->SetBinContent(122,31564);
   theta_e_stack_2->SetBinContent(123,30175);
   theta_e_stack_2->SetBinContent(124,29667);
   theta_e_stack_2->SetBinContent(125,28551);
   theta_e_stack_2->SetBinContent(126,27836);
   theta_e_stack_2->SetBinContent(127,26956);
   theta_e_stack_2->SetBinContent(128,25933);
   theta_e_stack_2->SetBinContent(129,25384);
   theta_e_stack_2->SetBinContent(130,24933);
   theta_e_stack_2->SetBinContent(131,24081);
   theta_e_stack_2->SetBinContent(132,23301);
   theta_e_stack_2->SetBinContent(133,22864);
   theta_e_stack_2->SetBinContent(134,22011);
   theta_e_stack_2->SetBinContent(135,21250);
   theta_e_stack_2->SetBinContent(136,20517);
   theta_e_stack_2->SetBinContent(137,19726);
   theta_e_stack_2->SetBinContent(138,19162);
   theta_e_stack_2->SetBinContent(139,18416);
   theta_e_stack_2->SetBinContent(140,18012);
   theta_e_stack_2->SetBinContent(141,17531);
   theta_e_stack_2->SetBinContent(142,16522);
   theta_e_stack_2->SetBinContent(143,16026);
   theta_e_stack_2->SetBinContent(144,15571);
   theta_e_stack_2->SetBinContent(145,14794);
   theta_e_stack_2->SetBinContent(146,14717);
   theta_e_stack_2->SetBinContent(147,13782);
   theta_e_stack_2->SetBinContent(148,13566);
   theta_e_stack_2->SetBinContent(149,13001);
   theta_e_stack_2->SetBinContent(150,12289);
   theta_e_stack_2->SetBinContent(151,11920);
   theta_e_stack_2->SetBinContent(152,11483);
   theta_e_stack_2->SetBinContent(153,10737);
   theta_e_stack_2->SetBinContent(154,10451);
   theta_e_stack_2->SetBinContent(155,9880);
   theta_e_stack_2->SetBinContent(156,9519);
   theta_e_stack_2->SetBinContent(157,9129);
   theta_e_stack_2->SetBinContent(158,8665);
   theta_e_stack_2->SetBinContent(159,8210);
   theta_e_stack_2->SetBinContent(160,7556);
   theta_e_stack_2->SetBinContent(161,7493);
   theta_e_stack_2->SetBinContent(162,6968);
   theta_e_stack_2->SetBinContent(163,6711);
   theta_e_stack_2->SetBinContent(164,6353);
   theta_e_stack_2->SetBinContent(165,6020);
   theta_e_stack_2->SetBinContent(166,5796);
   theta_e_stack_2->SetBinContent(167,5442);
   theta_e_stack_2->SetBinContent(168,5167);
   theta_e_stack_2->SetBinContent(169,5115);
   theta_e_stack_2->SetBinContent(170,4757);
   theta_e_stack_2->SetBinContent(171,4508);
   theta_e_stack_2->SetBinContent(172,4281);
   theta_e_stack_2->SetBinContent(173,4076);
   theta_e_stack_2->SetBinContent(174,4071);
   theta_e_stack_2->SetBinContent(175,3882);
   theta_e_stack_2->SetBinContent(176,3776);
   theta_e_stack_2->SetBinContent(177,3652);
   theta_e_stack_2->SetBinContent(178,3612);
   theta_e_stack_2->SetBinContent(179,3447);
   theta_e_stack_2->SetBinContent(180,3308);
   theta_e_stack_2->SetBinContent(181,3117);
   theta_e_stack_2->SetBinContent(182,3054);
   theta_e_stack_2->SetBinContent(183,3053);
   theta_e_stack_2->SetBinContent(184,2934);
   theta_e_stack_2->SetBinContent(185,2978);
   theta_e_stack_2->SetBinContent(186,2906);
   theta_e_stack_2->SetBinContent(187,2713);
   theta_e_stack_2->SetBinContent(188,2672);
   theta_e_stack_2->SetBinContent(189,2478);
   theta_e_stack_2->SetBinContent(190,2514);
   theta_e_stack_2->SetBinContent(191,2369);
   theta_e_stack_2->SetBinContent(192,2379);
   theta_e_stack_2->SetBinContent(193,2191);
   theta_e_stack_2->SetBinContent(194,2036);
   theta_e_stack_2->SetBinContent(195,1946);
   theta_e_stack_2->SetBinContent(196,1728);
   theta_e_stack_2->SetBinContent(197,1626);
   theta_e_stack_2->SetBinContent(198,1514);
   theta_e_stack_2->SetBinContent(199,1473);
   theta_e_stack_2->SetBinContent(200,1395);
   theta_e_stack_2->SetBinContent(201,15019);
   theta_e_stack_2->SetEntries(2.006725e+07);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.006725e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  10.36");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   4.75");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   theta_e_stack_2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(theta_e_stack_2);

   ci = 1185;
   color = new TColor(ci, 0.04705882, 0.3647059, 0.6470588, " ", 0.15);
   theta_e_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#0c5da5");
   theta_e_stack_2->SetLineColor(ci);
   theta_e_stack_2->GetXaxis()->SetLabelFont(42);
   theta_e_stack_2->GetXaxis()->SetTitleOffset(1);
   theta_e_stack_2->GetXaxis()->SetTitleFont(42);
   theta_e_stack_2->GetYaxis()->SetLabelFont(42);
   theta_e_stack_2->GetYaxis()->SetTitleFont(42);
   theta_e_stack_2->GetZaxis()->SetLabelFont(42);
   theta_e_stack_2->GetZaxis()->SetTitleOffset(1);
   theta_e_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(theta_e_stack_2,"sames histo");
   hs->Draw("hist nostack");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.258571e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  10.21");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   4.71");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.006725e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  10.36");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   4.75");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
