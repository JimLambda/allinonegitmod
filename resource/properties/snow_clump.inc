{collider "construction"}
{obstacleID "construction"}

{props "ice" "cornered" "parts" "stone" "no_destroyed_stamp"}

{armor
	{setting "body"
		{threshold {pierce {calibre 12}}}
		{ray_cast_thickness}
		{volumes "body*"}
		{threshold
			{blast {koef 1}}
		}
	}
}

{lodclass "decor_medium"}
