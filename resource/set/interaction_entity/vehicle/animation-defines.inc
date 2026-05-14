(define "crew_ani"
	{with_linked_entity "%crew"
		{ani_%mode "%ani" %extra}
	}
)
(define "crew_ani_delay"
	{delay %time "%delay"
		{with_linked_entity "%crew"
			{ani_%mode "%ani" %extra}
		}
	}
)
(define "crew_ani_play"
	("crew_ani" crew(%crew) mode(play) ani(%ani) extra(%extra))
)
(define "crew_ani_play_delay"
	("crew_ani_delay" crew(%crew) mode(play) ani(%ani) time(%time) delay(%delay) extra(%extra))
)
(define "crew_ani_loop"
	("crew_ani" crew(%crew) mode(play) ani(%ani) extra(%extra resume loop))
)
(define "crew_ani_stop"
	("crew_ani" crew(%crew) mode(stop) ani(%ani) extra(%extra))
)
(define "crew_ani_wind"
	("crew_ani" crew(%crew) mode(wind) ani(%ani) extra(%extra))
)
(define "crew_ani_event" ;// not used yet
	{on %event "%call"
		("crew_ani_%type" crew(%crew) ani(%ani))
	}
)

;wind = begin, end
;play = 1 <= -1, callback, resume, loop
