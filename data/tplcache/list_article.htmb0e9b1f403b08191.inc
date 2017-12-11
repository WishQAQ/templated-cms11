<?php
$z[0]=Array("field","",375,394);
$z[0][4]['name']="title";
$z[1]=Array("global","",395,421);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",462,491);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",531,589);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",3305,3340);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",3868,3890);
$z[5][4]['name']="typename";
$z[6]=Array("channel","\r\n            <li class=\"\"><a href=\"[field:typeurl/]\">[field:typename/]</a></li>\r\n            ",5978,6188);
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<li class='current'><a href='~typelink~'>~typename~</a></li>";
$z[7]=Array("list","\r\n                    <div class=\"entry-item\">\r\n                      <div class=\"time\">\r\n                        <p class=\"time-day\">[field:pubdate function='strftime(\"%d\",@me)'/]</p>\r\n                        <p class=\"time-date\">[field:pubdate function='strftime(\"%Y-%m\",@me)'/]</p>\r\n                      </div>\r\n                      <div class=\"entry-title\">\r\n                        <h2><a href=\"[field:arcurl/]\" target=\"_blank\">[field:title/]</a></h2>\r\n                      </div>\r\n                      <div class=\"entry-summary\">\r\n                        <div class=\"qhd-content\">\r\n                          <p>[field:description function='cn_substr(@me,250)'/]...</p>\r\n                        </div>\r\n                      </div>\r\n                    </div>\r\n                    ",6726,7553);
$z[7][4]['pagesize']="10";
$z[8]=Array("pagelist","",7660,7726);
$z[8][4]['listitem']="index,end,pre,next,pageno";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",7915,7950);
$z[9][4]['filename']="foot.htm";

?>