<div id="subsubmenu">
<p><gettext>Klassenarbeit:</gettext>
<!--#if expr="$done_test_start" -->
<!--#if expr="$todo_test_handout" -->
<a href="room_test_handout" class="todo"><gettext>Bereitstellen</gettext></a>
<!--#else -->
<a href="room_test_handout"><gettext>Bereitstellen</gettext></a>
<!--#endif -->
-
<!--#if expr="$todo_test_password" -->
<a href="room_test_password" class="todo"><gettext>Passwort &auml;ndern</gettext></a>
<!--#else -->
<a href="room_test_password"><gettext>Passwort &auml;ndern</gettext></a>
<!--#endif -->
-
<!--#if expr="$todo_test_collect" -->
<a href="room_test_collect" class="todo"><gettext>Einsammeln</gettext></a>
<!--#else -->
<a href="room_test_collect"><gettext>Einsammeln</gettext></a>
<!--#endif -->
<!--#else -->
<gettext>Bereitstellen</gettext>
-
<gettext>Passwort &auml;ndern</gettext>
-
<gettext>Einsammeln</gettext>
<!--#endif --></p>
</div>


<hr>
