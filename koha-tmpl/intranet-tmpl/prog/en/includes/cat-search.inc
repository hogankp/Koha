<div class="gradient">
<h1 id="logo"><a href="/cgi-bin/koha/mainpage.pl">[% LibraryName %]</a></h1><!-- Begin Catalogue Resident Search Box -->
<div id="header_search">

[% INCLUDE 'patron-search-box.inc' %]

[% IF ( CAN_user_circulate ) %]
<div id="checkin_search" class="residentsearch">
    <p class="tip">Scan a barcode to check in:</p>
    <form method="post" action="/cgi-bin/koha/circ/returns.pl" autocomplete="off">
        <input name="barcode" id="ret_barcode" size="40" />
        <input value="Submit" class="submit" type="submit" />
    </form>
</div>
	[% END %]
	[% IF ( CAN_user_catalogue ) %]
	<div id="catalog_search" class="residentsearch">
	<p class="tip">Enter search keywords:</p>
		<form action="/cgi-bin/koha/catalogue/search.pl"  method="get" id="cat-search-block">
			 <input type="text" name="q" id="search-form" size="40" value="" title="Enter the terms you wish to search for." class="form-text" />
				<input type="submit" class="submit" value="Submit" />
		</form>
	</div>
	[% END %]
	
			<ul>
            [% IF ( CAN_user_circulate ) %]<li><a href="#circ_search">Check out</a></li>[% END %]
    [% IF ( CAN_user_circulate ) %]<li><a href="#checkin_search">Check in</a></li>[% END %]
            [% IF ( CAN_user_catalogue ) %]<li class="ui-tabs-selected"><a href="#catalog_search">Search the catalog</a></li>[% END %]
			</ul>	
</div><!-- /header_search -->
</div><!-- /gradient -->
<!-- End Catalogue Resident Search Box -->
