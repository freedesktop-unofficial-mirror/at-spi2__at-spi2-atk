/*
 *
 * AccessibleApplication function prototypes
 *
 */

#include <cspi/spi-private.h>

/**
 * AccessibleApplication_ref:
 * @obj: a pointer to the #AccessibleApplication on which to operate.
 *
 * Increment the reference count for an #AccessibleApplication.
 *
 **/
void
AccessibleApplication_ref (AccessibleApplication *obj)
{
  cspi_object_ref (obj);
}

/**
 * AccessibleApplication_unref:
 * @obj: a pointer to the #AccessibleApplication object on which to operate.
 *
 * Decrement the reference count for an #AccessibleApplication.
 *
 **/
void
AccessibleApplication_unref (AccessibleApplication *obj)
{
  cspi_object_unref (obj);
}

/**
 * AccessibleApplication_getToolkitName:
 * @obj: a pointer to the #AccessibleApplication to query.
 *
 * Get the name of the UI toolkit used by an #AccessibleApplication.
 *
 * Returns: a UTF-8 string indicating which UI toolkit is
 *          used by an application.
 **/
char *
AccessibleApplication_getToolkitName (AccessibleApplication *obj)
{
  char *retval;

  cspi_return_val_if_fail (obj != NULL, NULL);

  retval =
    Accessibility_Application__get_toolkitName (CSPI_OBJREF (obj),
						cspi_ev ());

  cspi_return_val_if_ev ("toolkitName", NULL);

  return retval;
}

/**
 * AccessibleApplication_getVersion:
 * @obj: a pointer to the #AccessibleApplication being queried.
 *
 * Get the version of the at-spi bridge exported by an
 *      #AccessibleApplication instance.
 *
 * Returns: a UTF-8 string indicating the application's
 *          at-spi version.
 **/
char *
AccessibleApplication_getVersion (AccessibleApplication *obj)
{
  char *retval;

  cspi_return_val_if_fail (obj != NULL, NULL);

  retval =
    Accessibility_Application__get_version (CSPI_OBJREF (obj),
					    cspi_ev ());

  cspi_return_val_if_ev ("getVersion", NULL);

  return retval;
}

/**
 * AccessibleApplication_getID:
 * @obj: a pointer to the #AccessibleApplication being queried.
 *
 * Get the unique ID assigned by the Registry to an
 *      #AccessibleApplication instance.
 * (Not Yet Implemented by the registry).
 *
 * Returns: a unique #long integer associated with the application
 *          by the Registry, or 0 if the application is not registered.
**/
long
AccessibleApplication_getID (AccessibleApplication *obj)
{
  long retval;

  cspi_return_val_if_fail (obj != NULL, 0);

  retval = Accessibility_Application__get_id (CSPI_OBJREF (obj),
					      cspi_ev ());

  cspi_return_val_if_ev ("get_id", 0);

  return retval;
}

/**
 * AccessibleApplication_pause:
 * @obj: a pointer to the #Accessible object on which to operate.
 *
 * Attempt to pause the application (used when client event queue is
 *  over-full).
 * Not Yet Implemented.
 *
 * Returns: #TRUE if the application was paused successfully, #FALSE otherwise.
 *
 **/
SPIBoolean
AccessibleApplication_pause (AccessibleApplication *obj)
{
  return FALSE;
}

/**
 * AccessibleApplication_resume:
 * @obj: a pointer to the #Accessible object on which to operate.
 *
 * Attempt to resume the application (used after #AccessibleApplication_pause).
 * Not Yet Implemented.
 *
 * Returns: #TRUE if application processing resumed successfully, #FALSE otherwise.
 *
 **/
SPIBoolean
AccessibleApplication_resume (AccessibleApplication *obj)
{
  return FALSE;
}
